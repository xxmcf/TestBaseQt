#ifndef TESTCASE_H
#define TESTCASE_H

#include <QDebug>

#define log qDebug
#define TEST_CASE_BEGIN log("----------- %s -----------", __FUNCTION__)
#define VName(x) #x

void test(const char* testName, const char* real, const char* expected);
void test(const char* testName, int real, int expected);
void TestQDataStream();
void TestReflect();

#endif // TESTCASE_H
