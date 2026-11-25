#include <gtest/gtest.h>


class Test_int : public testing::Test
{
protected:
    Test_int() {
	m_val_1 = 100;
	m_val_2 = 200;
	m_val_3 = 300;
    }

    int m_val_1;
    int m_val_2;
    int m_val_3;
};


TEST_F(Test_int, check_equality) {
    EXPECT_EQ(m_val_1, 100);
    EXPECT_EQ(m_val_2, 100);
}
