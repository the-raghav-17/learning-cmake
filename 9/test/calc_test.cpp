#include <catch2/catch_test_macros.hpp>
#include "calc.h"

TEST_CASE("sum_adds_two_ints", "[calc]") {
    Calc sut;
    CHECK(4 == sut.sum(2, 2));
}

TEST_CASE("multiply_multiplies_two_ints", "[calc]") {
    Calc sut;
    CHECK(12 == sut.multiply(2, 2));
}
