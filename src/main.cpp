#include <iostream>
#include <time.h>
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
        std::cout << "Enter variable a: ";
        std::cin >> a;

        std::cout << "Enter variable b: ";
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
        std::cout << "Enter a number: ";
        std::cin >> num;

        bool is_has_car = true;

        // Логические операторы
        //  || - или (or)
        //  && - и (and)

        if (num >= 3 || !is_has_car) {
            std::cout << "The number is greater";
            if (num == 5) {
                std::cout << "Number == 5";
            }
        }
        else if (num == 2) {
            std::cout << "Number == 2";
        }
        else if (num == -12) {
            std::cout << "Number == -12";
        }
        else {
            std::cout << "ELSE";
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

        switch (math) {
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
    case 3: {
        srand(time(NULL));

        int result = 1 + rand() % 20; // случайное число от 1 до 20
        std::cout << result << std::endl;
        break;
    }
    default:
        std::cout << "Default";
        break;
    }
}

// Циклы
void partInfo5(int swnum) {
    switch (swnum) {
        // Цикл for
    case 1: {
        for (int i = 100; i >= 10; i -= 15) {
            std::cout << "El: " << i << std::endl;
        }
        break;
    }
          // Цикл while
    case 2: {
        int j = 1;
        while (j < 11) {
            std::cout << "El: " << j << std::endl;
            j++;
        }
        break;
    }
          // Цикл do while
    case 3: {
        int k = 100;
        do {
            std::cout << "El: " << k << std::endl;
            k -= 10;
        } while (k < 10);
        break;
    }
    case 4: {
        // Операторы в циклах
        for (int i = 1; i < 15; i++) {
            if (i == 10)
                break;

            if (i % 2 == 0)
                continue;

            std::cout << "El: " << i << std::endl;
        }
        break;
    }
    case 5: {
        // Практический пример
        srand(time(NULL));
        int rand_num = 1 + rand() % 15;
        bool stop = false;
        int user_input;

        do {
            std::cout << "Enter number: ";
            std::cin >> user_input;
            if (user_input != rand_num)
                std::cout << "You didn't guess" << std::endl;
            else
                stop = true;
        } while (!stop);

        std::cout << "That's right!";

        break;
    }
    default:
        std::cout << "Default";
        break;
    }
}

// Массивы данных
void partInfo6(int swnum) {
    switch(swnum) {
    case 1: {

        int nums[3];
        nums[0] = 56;
        nums[1] = 563;
        nums[2] = 2;

        nums[1] = 4;
        nums[1]++;

        // std::cout << nums[1];

        float nums2[3] = {4, 6, 7};

        for (int i = 0; i < 3; i++) {
            std::cout << "El " << i << ": " << nums2[i] << std::endl;
        }

        break;
    }
    case 2: {
        // Практическое применение

        // Присваивание значений по индексам
        float numbers[5];
        for (int i = 0; i < 5; i++) {
            std::cout << "Enter number " << i << ": ";
            std::cin >> numbers[i];
        }

        // Получение суммы или миннимального значения
        float summa = 0;
        float min = numbers[0];
        for (int i = 0; i < 5; i++) {
            summa += numbers[i];
            if (numbers[i] < min)
                min = numbers[i];
        }
        std::cout << "Summa: " << summa << std::endl;
        std::cout << "Min: " << min << std::endl;

        // Вывод значений по индексам в терминал
        for (int i = 0; i < 5; i++) {
            std::cout << "El: " << numbers[i] << std::endl;
        }

        break;
    }
    case 3: {
        // Многомерные массивы
        int matrix[3][2] = {
            {3, 5},
            {5, 8},
            {-2, 0}
        };
        // matrix[1][1] = 6;
        // std::cout << matrix[1][1] << std::endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                std::cout << matrix[i][j] << std::endl;
            }
        }
        break;
    }
    default:
        std::cout << "Default";
        break;
    }
}

// Динамический массив
void partInfo7(int swnum) {
    switch(swnum){
    case 1:{
        
        int *nums = new int[3]; // Выдиление памяти
        nums[0] = 45;
        std::cout << nums[0] << std::endl; 
        delete[] nums; // Память очищена

        break;
    }
    default:
        std::cout << "Default";
        break;
    }
}


int main() {

    partInfo7(1);

    return 0;
}