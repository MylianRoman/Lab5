#pragma once
#include <iostream>
#include <cmath> 

class Progression {
public:
    virtual double sum(int n) const = 0;

    virtual ~Progression() {}
};