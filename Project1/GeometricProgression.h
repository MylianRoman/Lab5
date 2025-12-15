#pragma once
#include <iostream>
#include <cmath> 
#include "Progression.h"

class GeometricProgression : public Progression {
private:
    double firstElement;
    double ratio;

public:
    GeometricProgression(double first, double r)
        : firstElement(first), ratio(r) {}

    double sum(int n) const override {
        if (ratio == 1) {
            return n * firstElement;
        }
        return firstElement * (1 - pow(ratio, n)) / (1 - ratio);
    }
};
