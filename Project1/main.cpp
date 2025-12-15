#include <iostream>
#include <cmath>
#include "ArithmeticProgression.h"
#include "GeometricProgression.h"
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double firstElementArith, difference, firstElementGeo, ratio;
    int n;

    cout << "Enter the first element of the arithmetic progression: ";
    cin >> firstElementArith;
    cout << "Enter the difference: ";
    cin >> difference;

    cout << "Enter the first element of the geometric progression: ";
    cin >> firstElementGeo;
    cout << "Enter the ratio: ";
    cin >> ratio;


    ArithmeticProgression arithProg(firstElementArith, difference);
    GeometricProgression geoProg(firstElementGeo, ratio);

    cout << "Enter the number of elements in the progression: ";
    cin >> n;

    cout << "The sum of an arithmetic progression: " << arithProg.sum(n) << endl;
    cout << "Sum of a geometric progression: " << geoProg.sum(n) << endl;

    return 0;
}