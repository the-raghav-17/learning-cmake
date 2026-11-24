#pragma once

#include "gmock/gmock.h"

class Random_number_generator_mock
      : public Random_number_generator
{
public:
    MOCK_METHOD(int, get, (), (override));
};
