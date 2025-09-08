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


// example 1 (0.4)
void example_1(void) {
    std::cout << "Here is some text." << std::endl;
}


// task 4
long long task_4(int a, int b) {
    return std::pow(a, b);
}


// random task
std::string get_user_name(void) {
    std::string user_name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> user_name;
    return user_name;
}


// random task
void check_size(void){
    std::cout << "The sizeof(char) is: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "The sizeof(short) is: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "The sizeof(int) is: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "The sizeof(long) is: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "The sizeof(long long) is: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "The sizeof(float) is: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "The sizeof(double) is: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "The sizeof(long double) is: " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "The sizeof(bool) is: " << sizeof(bool) << " bytes" << std::endl;
}


// example 2 поиск под-строки в строке
bool sub_string(std::string) {
    std::string tmp = "()[]{}";
    std::string sub = "[]"; // true
    std::string sub2 = "[1]"; // false
    if (tmp.find(sub) != std::string::npos) {
        return true;
    }else {
        return false;
    }
    return NULL;
}