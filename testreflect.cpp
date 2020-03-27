/*
 * @brief   QT 反射机制练习
 * @author  xiao2mcf
 * @version 1.0
 * @date    2020/03/25
 */

#include <QObject>
#include "testcase.h"
#include "testreflect.h"



//得到注册的类成员变量
static void test1()
{
    MyClass theObj;
    const QMetaObject* metaObj = theObj.metaObject();
    //1.遍历类的属性
    int propertyCnt = metaObj->propertyCount();
    for ( int i = 0; i < propertyCnt; ++ i )
    {
        QMetaProperty oneProperty = metaObj->property( i );

        if (oneProperty.name() == "Member1")
        {
            test(__FUNCTION__, VName(int), QVariant::typeToName(oneProperty.type()));
        }
        else if (oneProperty.name() == "Member2")
        {
            test(__FUNCTION__, VName(int), QVariant::typeToName(oneProperty.type()));
        }
        else if (oneProperty.name() == "MEMBER3")
        {
            test(__FUNCTION__, VName(QString), QVariant::typeToName(oneProperty.type()));
        }

        //log() << " name: " << oneProperty.name();
        //log() << " type: " << QVariant::typeToName( oneProperty.type()) << "\n";
    }
}

//得到注册的类成员函数
static void test2()
{
    MyClass theObj;
    const QMetaObject* metaObj = theObj.metaObject();
    int methodCnt = metaObj->methodCount();
    for ( int idx = 0; idx < methodCnt; ++ idx )
    {
        QMetaMethod oneMethod = metaObj->method( idx );
        //log() << " typeName: " << oneMethod.typeName();
        //log() << " name: " << oneMethod.name().data();
        //log() << " signature: " << oneMethod.methodSignature().data();
        //log() << " methodType: " << oneMethod.methodType();
        //typeName:  int
        //name:  func
        //signature:  func(QString)
        //methodType:  0

        if (!strcmp(oneMethod.name(),"Member1"))
        {
            test(__FUNCTION__, VName(int), oneMethod.typeName());
        }
        else if (!strcmp(oneMethod.name(),"Member2"))
        {
            test(__FUNCTION__, VName(int), oneMethod.typeName());
        }
        else if (!strcmp(oneMethod.name(),"MEMBER3"))
        {
            test(__FUNCTION__, VName(QString), oneMethod.typeName());
        }
        else if (!strcmp(oneMethod.name(),"setMember1"))
        {
            test(__FUNCTION__, VName(void), oneMethod.typeName());
        }
        else if (!strcmp(oneMethod.name(),"setMember2"))
        {
            test(__FUNCTION__, VName(void), oneMethod.typeName());
        }
        else if (!strcmp(oneMethod.name(),"setMember3"))
        {
            test(__FUNCTION__, VName(void), oneMethod.typeName());
        }
        else if (!strcmp(oneMethod.name(),"func"))
        {
            test(__FUNCTION__, VName(int), oneMethod.typeName());
        }


//        typeName:  int
//        name:  func
//        signature:  func(QString)
//        methodType:  0
    }
}

//使用反射
static void test3()
{
    MyClass newObj;
    newObj.setProperty("Member1", 66);
    std::string temp = newObj.property( "Member1" ).toString().toStdString();
    QString s = QString("%1").arg(newObj.Member1());
    test(__FUNCTION__, s.toStdString().c_str(), temp.c_str());
}

//调用注册的函数
static void test4()
{
    int ret;
    MyClass newObj;
    newObj.setMember1( 20 );
    newObj.setMember2( 50 );

    QMetaObject::invokeMethod( &newObj, "func", Qt::DirectConnection, Q_RETURN_ARG(int, ret ), Q_ARG(QString, "+"));
    int addV = newObj.Member1() + newObj.Member2();
    test(__FUNCTION__, 20, newObj.Member1());
    test(__FUNCTION__, 50, newObj.Member2());
    test(__FUNCTION__, 70, addV);
    test(__FUNCTION__, ret, addV);
}

//遍历该类的枚举集合
static void test5()
{
    MyClass newObj;
    const QMetaObject* metaObj = newObj.metaObject();

    int enumCount = metaObj->enumeratorCount();

    for (int i=0; i<enumCount; i++)
    {
        QMetaEnum enumerator = metaObj->enumerator(i);
        int itemCount = enumerator.keyCount();
        for (int j = 0; j<itemCount; j++)
        {
            //log() << enumerator.key(j) << "=>" << enumerator.value(j);
            //High, Low, VeryHigh, VeryLow
            if (!strcmp(enumerator.key(j), "High"))
            {
                test(__FUNCTION__, 0, enumerator.value(j));
            }
            else if (!strcmp(enumerator.key(j), "Low"))
            {
                test(__FUNCTION__, 1, enumerator.value(j));
            }
            else if (!strcmp(enumerator.key(j), "VeryHigh"))
            {
                test(__FUNCTION__, 2, enumerator.value(j));
            }
            else if (!strcmp(enumerator.key(j), "VeryLow"))
            {
                test(__FUNCTION__, 3, enumerator.value(j));
            }
        }
    }
}

void TestReflect()
{
    TEST_CASE_BEGIN;

    test1();
    test2();
    test3();
    test4();
    test5();

}
