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


// Переменные и типы данных
void partInfo2(int swnum) {
    switch (swnum) {
    case 1: {
        //Использование переменных
        int a, b;
        std::cout << "Введите переменную a: ";
        std::cin >> a;

        std::cout << "Введите переменную b: ";
        std::cin >> b;

        std::cout << "A: " << a << ". B: " << b;

        // Типы данных(целые числа)
        short num1 = 7; // 2 byte / от -32K до 32K
        int num2 = 5; // 4 byte / от -2B до 2B
        long num3 = 50; // 8 byte

        unsigned short num4 = 7; // 2 byte / от 0 до 65K
        unsigned int num5 = 5; // 4 byte / от 0 до 4B
        unsigned long num6 = 50; // 8 byte

        // Числа с точкой
        float num7 = 5.893456f;
        double num8 = 454.343411f;

        // Хранение символа
        char sym = '&';

        bool isHappy = true;
        break;
    }
    default:
        std::cout << "Default";
        break;
    }
}

// Условные конструкции (if else) // switch case
void partInfo3(int swnum) {
    switch (swnum) {
    case 1: {
        int num;
        std::cout << "Введите число: ";
        std::cin >> num;

        bool is_has_car = true;

        // Логические операторы
        //  || - или (or)
        //  && - и (and)

        if (num >= 3 || !is_has_car) {
            std::cout << "Число у нас больше";
            if (num == 5) {
                std::cout << "Число == 5";
            }
        }
        else if (num == 2) {
            std::cout << "Число == 2";
        }
        else if (num == -12) {
            std::cout << "Число == -12";
        }
        else {
            std::cout << "Сработал else";
        }
        break;
    }
    case 2: {
        int num;
        std::cin >> num;

        switch (num) {
        case 5:
            std::cout << "Num is 5";
            break;
        case 50:
            std::cout << "Num is 50";
            break;
        case 35:
            std::cout << "Num is 35";
            break;
        default:
            std::cout << "Default";
            break;
        }
        break;
    }
    default:
        std::cout << "Default";
        break;
    }
}

void partInfo4(int swnum) {
    switch (swnum) {
    case 1: {
        float num1, num2, res;
        std::cout << "Enter num1: ";
        std::cin >> num1;

        std::cout << "Enter num2: ";
        std::cin >> num2;

        // +, -, *, /
        char math;
        std::cout << "Enter math symbol: ";
        std::cin >> math;

        // if (math == '+')
        //     res = num1 + num2;
        // else if (math == '-')
        //     res = num1 - num2;
        // else if (math == '*')
        //     res = num1 * num2;
        // else if (math == '/')
        //     res = num1 / num2;

        switch(math) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        default:
            res = 0;
            std::cout << "Error";
            break;
        }
        std::cout << "Result: " << res << std::endl;
        break;
    }
    case 2: {
        // Остаток при делении
        int a = 10, b = 3, z;
        z = a % b;
        std::cout << z;

        // Сокращенные операции
        a += 5;
        a++; // Добавляем 1
        a--; // Отнимаем 1



        break;
    }
    default:
        std::cout << "Default";
        break;
    }
}


int main() {
    SetConsoleOutputCP(65001); // UTF-8
    SetConsoleCP(65001);

    partInfo4(1);

    return 0;
}