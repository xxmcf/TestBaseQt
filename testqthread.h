#ifndef TESTQTHREAD_H
#define TESTQTHREAD_H

#include <QThread>

class WorkThread : public QThread
{
    Q_OBJECT
public:
    WorkThread(QObject *parent = nullptr, int counter = 20);
    ~WorkThread();
    virtual void run() override;

public:
    int Counter;

};

class MyObject : public QObject
{
    Q_OBJECT
public:
    MyObject(QObject* parent = nullptr);
    ~MyObject();
    Qt::HANDLE GetThreadId();
public:
    Qt::HANDLE ThreadId;
};

//MoveToThread练习的QObject类
class MySecondObject : public MyObject
{
    Q_OBJECT
public:
    MySecondObject(QObject* parent = nullptr);
    ~MySecondObject();

public slots:
    void first();

signals:
    void sig_sendfirst();
};

//模拟主线程
class MyMainObject : public MyObject
{
    Q_OBJECT

public:
    MyMainObject(QObject *parent = 0);
    ~MyMainObject();

public slots:


    void slot_recivefirst();

signals:
    void  sig_first();

};

#endif // TESTQTHREAD_H
