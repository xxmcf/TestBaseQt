#ifndef TESTCASE_H
#define TESTCASE_H

#include <QDebug>
#include <QThread>

#define log qDebug
#define TEST_CASE_BEGIN log("----------- %s -----------", __FUNCTION__)
#define TEST_CASE_CURRENT_THREADID log() <<__FUNCTION__<< QThread::currentThreadId()
#define VName(x) #x


void test(const char* testName, const char* real, const char* expected);
void test(const char* testName, int real, int expected);

void TestQDataStream();
void TestReflect();
void TestQThread();

#endif // TESTCASE_H
