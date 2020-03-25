/*
 * @brief   测试用例通用函数定义
 * @author  xiao2mcf
 * @version 1.0
 * @date    2020/03/25
 *
 */


#include <sstream>
#include <string>
#include "testcase.h"


void test(const char* testName, const char* real, const char* expected)
{
    std::stringstream sstr;
    sstr << testName << " : ";
    if (!real && !expected)
    {
        sstr << "PASSED";
    }
    else if (!real && nullptr !=expected)
    {
        sstr << "FAILED";
    }
    else if (real != nullptr && !expected)
    {
        sstr << "FAILED";
    }
    else if (strcmp(real, expected) != 0)
    {
        sstr << "FAILED";
    }
    else
    {
        sstr << "PASSED";
    }
    log("%s", sstr.str().c_str());
}

