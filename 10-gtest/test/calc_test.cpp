#include <gtest/gtest.h>
#include "calc.h"


class CalcTestSuite : public ::testing::Test {
protected:
    Calc sut_;
};


TEST_F(CalcTestSuite, sum_adds_two_ints) {
    EXPECT_EQ(4, sut_.sum(2, 2));
}


TEST_F(CalcTestSuite, multiply_multiplies_two_ints) {
    EXPECT_EQ(12, sut_.multiply(3, 4));
}
