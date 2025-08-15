#include <iostream>
#include <windows.h>
#include "tasks/tasks.hpp"



/*int main(void) {
    // Task 1
    std::cout << "task 1 solution: " << std::endl;
    bool res = true;
    check_win_warg(res);

    // Task 2: Compute the sum of a and b, a and b should be provided as arguments, the result should be divided by 2 and printed to the screen 
    std::cout << "task 2 solution: " << std::endl;
    double a = 5;
    double b = 10;
    std::cout << compute(a, b) / 2 << std::endl;

    // Task3
    std::cout << "task 3 solution: " << std::endl;
    example_1();

    //Task4
    std::cout << "task 4 solution: " << std::endl;
    std::cout << task_4(15, 6) << std::endl;

    //Task 5
    std::cout << "task 5 solution: " << std::endl;
    std::string user_name = get_user_name();
    std::cout << "Hello " << user_name << std::endl;

    //Task 6 Size of Fundamental Data Types
    std::cout << "task 6 solution: " << std::endl;
    check_size();


    return 0;
}*/

int main(){
    SetConsoleOutputCP(65001); // UTF-8
    SetConsoleCP(65001);
    int num = -45;
    num = 3;
    std::cout << "Переменная: " << num << std::endl;

    return 0;
}