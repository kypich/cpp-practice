#include "tasks.hpp"
#include <iostream>
#include <cmath>

void check_win_warg(bool res) {
    if (res) {
        std::cout << "Ready" << std::endl;
    }
    else {
        std::cout << "Not" << std::endl;
    }
}

double compute(double a, double b) {
    return a + b;
}

//example 1 (0.4)

void example_1(void) {
    std::cout << "Here is some text." << std::endl;
}

int hui(int a, int b) {
    return std::pow(a, b);
}