#include <iostream>

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

int main(void) {
    // Task 1
    // bool res = true;
    // check_win_warg(res);

    // Task 2: Compute the sum of a and b, a and b should be provided as arguments, the result should be divided by 2 and printed to the screen 
    double a = 5;
    double b = 10;
    std::cout << compute(a, b) / 2 << std::endl;
    return 0;
}