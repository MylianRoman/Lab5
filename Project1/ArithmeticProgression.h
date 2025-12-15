#include <iostream>
#include <cmath>
#include "Progression.h"

class ArithmeticProgression : public Progression {
private:
    double firstElement;
    double difference;

public:
    ArithmeticProgression(double first, double diff)
        : firstElement(first), difference(diff) {}

    double sum(int n) const override {
        return n * firstElement + (n * (n - 1) / 2) * difference;
    }
}; 
