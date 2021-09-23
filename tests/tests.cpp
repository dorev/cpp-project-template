#include "gtest/gtest.h"
#include "mycode/mycode.h"

namespace MyCode
{

class MyTest : public ::testing::Test
{
protected:

    MyTest()
    {
    }

    ~MyTest() override
    {
    }

    void SetUp() override
    {
    }

    void TearDown() override
    {
    }
};


TEST_F(MyTest, IsEmpty)
{
    EXPECT_TRUE(MyFunction());
}

} // namespace MyCode