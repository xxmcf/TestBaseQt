/*
 * @brief   QDataStream QTextStream练习
 * @author  xiao2mcf
 * @version 1.0
 * @date    2020/03/25
 *
 */
#include <QDataStream>
#include <QTextStream>
#include <QFile>
#include <sstream>
#include <string>
#include "testcase.h"

struct MyStruct
{
    int x;
    int y;
    char s[8];

    std::string toString()
    {
        std::stringstream sstr;
        sstr << "x=" << x << ",y=" << y << ",s=" << s;
        return sstr.str();
    }
};

//重写QDataStream输出操作，以支持自定义类型的输入
inline QDataStream& operator<<(QDataStream& out, const MyStruct& ms)
{
    qint32 temp = ms.x;
    out << temp;
    temp = ms.y;
    out << temp;
    QString s = QString::fromLocal8Bit(ms.s);
    out << s;

    return out;
}

//重写QDataStream输出操作，以支持自定义类型的输出
inline QDataStream& operator>>(QDataStream& in,MyStruct& ms)
{
    QString s;
    qint32 temp;
    in>>temp;
    ms.x = temp;
    in >> temp;
    ms.y = temp;
    in >> s;
    strncpy(ms.s, s.toLocal8Bit().data(), sizeof(ms.s));
    return in;
}

//自定义数据结构内存写入和读取
static void test1()
{
    MyStruct b;
    MyStruct a = {1, 2, "hello"};
    QByteArray datagram;
    QDataStream out(&datagram, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_6);
    out << a;

    QDataStream in(&datagram, QIODevice::ReadOnly);
    in >> b;

    test(__FUNCTION__, b.toString().c_str(), a.toString().c_str());
}

//自定义数据结构文件写入和读取
static void test2()
{

    MyStruct a = {1, 2, "hello"};
    QFile data("output.txt");
    if (!data.open(QFile::WriteOnly|QFile::Truncate))
    {
        test(__FUNCTION__, nullptr, "");
        return;
    }
    QDataStream out(&data);
    out.setVersion(QDataStream::Qt_5_6);
    out << a;
    data.close();

    MyStruct b;
    QFile data2("output.txt");
    if (!data2.open(QIODevice::ReadOnly))
    {
        test(__FUNCTION__, nullptr, "");
        return;
    }
    QDataStream in(&data2);
    in >> b;
    test(__FUNCTION__, b.toString().c_str(), a.toString().c_str());
}

//QTextStream自定义数据结构文件写入和读取
static void test3()
{

    MyStruct a = {1, 2, "hello"};
    QFile data("output.txt");
    if (!data.open(QFile::WriteOnly|QFile::Truncate))
    {
        test(__FUNCTION__, nullptr, "");
        return;
    }
    QTextStream out(&data);
    out << a.x << a.y << a.s;
    data.close();

    MyStruct b =  {2, 3, "mello"};;
    QFile data2("output.txt");
    if (!data2.open(QIODevice::ReadOnly))
    {
        test(__FUNCTION__, nullptr, "");
        return;
    }
    QTextStream in(&data2);
    QString s;
    s = in.read(1);
    b.x = s.toInt();
    s = in.read(1);
    b.y = s.toInt();
    in >> s;
    strncpy(b.s, s.toLocal8Bit().data(), sizeof(b.s));
    test(__FUNCTION__, b.toString().c_str(), a.toString().c_str());
}



void TestQDataStream()
{
    TEST_CASE_BEGIN;

    test1();
    test2();
    test3();
}
