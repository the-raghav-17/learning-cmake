#pragma once

class Random_number_generator
{
public:
    virtual int get()=0;
    virtual ~Random_number_generator()=default;
}
