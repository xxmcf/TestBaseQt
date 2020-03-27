/*
 * @brief   QT QThread线程创建练习
 * @author  xiao2mcf
 * @version 1.0
 * @date    2020/03/25
 */

#include "testqthread.h"
#include "testcase.h"

WorkThread::WorkThread(QObject* parent, int counter /*= 20*/)
    : QThread(parent),
      Counter(counter)
{
    this->Counter = counter;
}

WorkThread::~WorkThread()
{
    if (this->isRunning())
    {        
        this->wait();
    }
}

void WorkThread::run()
{
    int cnt = Counter;
    Counter = 0;
    for (int i=0; i<cnt; i++)
    {
        Counter++;
        QThread::msleep(50);
    }
}

MyObject::MyObject(QObject* parent)
    :QObject(parent)
{
    ThreadId = QThread::currentThreadId();
}

MyObject::~MyObject()
{
}

Qt::HANDLE MyObject::GetThreadId()
{
    return QThread::currentThreadId();
}

MySecondObject::MySecondObject(QObject* parent)
    :MyObject(parent)
{
    TEST_CASE_CURRENT_THREADID;
}

MySecondObject::~MySecondObject()
{
    TEST_CASE_CURRENT_THREADID;
}

void MySecondObject::first()
{
    TEST_CASE_CURRENT_THREADID;
    emit sig_sendfirst();
}



MyMainObject::MyMainObject(QObject *parent /*= 0*/)
    :MyObject(parent)
{
    TEST_CASE_CURRENT_THREADID;
}

MyMainObject::~MyMainObject()
{
    TEST_CASE_CURRENT_THREADID;
}

void MyMainObject::slot_recivefirst()
{
    log() << __FUNCTION__ << GetThreadId();

}



//QThread练习
static void test1()
{
    WorkThread worker;
    worker.start();
    worker.wait();
    test(__FUNCTION__, 20, worker.Counter);
}

//MoveToThread练习
static void test2()
{
    MyMainObject *mainObj = new MyMainObject; //暂时不
    MySecondObject *secondThread = new MySecondObject;
    QThread *trd = new QThread;
    QThread *mainTrd = new QThread;

    secondThread->moveToThread(trd);
    mainObj->moveToThread(mainTrd);

    QObject::connect(trd, SIGNAL(started()), secondThread, SLOT(first()));
    QObject::connect(secondThread, SIGNAL(sig_sendfirst()), mainObj, SLOT(slot_recivefirst()), Qt::QueuedConnection);

    trd->start();
    mainTrd->start();

    emit secondThread->sig_sendfirst();

    //测试不删除，注意此处会有内存泄漏(测试信号槽的运行线程)
    //delete trd;
    //delete mainTrd;
    //delete secondThread;
    //delete mainObj;

    //输出
    //MyMainObject::MyMainObject 0x6158            主线程
    //MySecondObject::MySecondObject 0x6158        主线程
    //MySecondObject::first 0x35d0                 trd线程
    //MyMainObject::slot_recivefirst 0x7164        mainTrd线程
    //MyMainObject::slot_recivefirst 0x7164        mainTrd线程
}

void TestQThread()
{
    TEST_CASE_BEGIN;

    test1();
    test2();
}
