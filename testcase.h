#ifndef TESTCASE_H
#define TESTCASE_H

#include <QDebug>

#define log qDebug

void test(const char* testName, const char* real, const char* expected);

void TestQDataStream();

#endif // TESTCASE_H
