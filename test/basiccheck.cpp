#include "gtest/gtest.h"
#include "../src/core.h"

TEST(basic_check, test0)
{
    EXPECT_EQ(1, 1);
}

TEST(basic_check, test1)
{
    EXPECT_EQ(1, 0);
}

TEST(basic_check, coretest0)
{
    EXPECT_EQ(toTest(0, 1), 1);
}

TEST(basic_check, coretest1)
{
    EXPECT_EQ(toTest(0, 1), toTest(1, 0));
}