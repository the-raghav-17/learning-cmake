#include <gtest/gtest.h>
#include "calc.h"
#include "mocks/mock_rng.h"

using namespace ::testing;


class CalcTestSuite : public ::testing::Test {
protected:
    Random_number_generator_mock m_mock_rng{};
    Calc m_summ{ &m_mock_rng };
};


TEST_F(CalcTestSuite, sum_adds_two_ints) {
    EXPECT_EQ(4, sut_.sum(2, 2));
}


TEST_F(CalcTestSuite, multiply_multiplies_two_ints) {
    EXPECT_EQ(12, sut_.multiply(3, 4));
}

TEST_F(CalcTestSuite, add_random_number_adds_three) {
    EXPECT_CALL(m_mock_rng, get()).Times(1).WillOnce(Return(3));
    EXPECT_EQ(4, m_sut.add_random_number(1));
}
