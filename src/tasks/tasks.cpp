#include "tasks.hpp"
#include <iostream>
#include <cmath>
#include <string>

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

int task_4(int a, int b) {
    return std::pow(a, b);
}

std::string get_user_name(void) {
    std::string user_name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> user_name;
    return user_name;
}