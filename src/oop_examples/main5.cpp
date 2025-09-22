#include <iostream>

// Coursor parking lot: [ | ]

// Task 1: 
// 1. Создайте 3 разных класса, которые должны иметь как наследование, так и иерархическую зависимость, как показано ниже:
//     x - Первый класс базовый.
//     x - Второй класс должен реализовывать "публичное наследование» от первого класса.
//      - Третий класс должен быть иерархически зависим с вторым.
// 2. Приведите пример и объясните различные типы "eng. Object Casting". Чем они отличаются? Какие из них следует использовать, а какие избегать? Почему?

class Car {
public:
    std::string color;
    std::string engine;
    int hp;
    Car() {
        std::cout << "Default Car class created!\n";
    }
    // Car(std::string color, std::string engine, int hp) : color(color), engine(engine), hp(hp) {
    //     std::cout << "Car class created!\n";
    // }  
    Car(std::string color, std::string engine, int hp) {
        this->color = color;
        this->engine = engine;
        this->hp = hp;
    }
    void get_info() {
        std::cout << "Color: " << color << " Engine model: " << engine << " HP: " << hp << '\n';
    }
};

class BigCar : public Car {
private:
    bool trailer;
public:
    BigCar(std::string color, std::string engine, int hp, bool trailer) {
        this->color = color;
        this->engine = engine;
        this->hp = hp;
        this->trailer = trailer;
    }
    void get_info() {
        Car::get_info();
        std::cout << "Is trailer: " << trailer << '\n';
    }
};




int main(void) {

    Car PawlikCar("red", "mw22", 551);
    PawlikCar.get_info();


    BigCar PawlikBigCar("blue", "mk7000", 332, true);
    PawlikBigCar.get_info();


    return 0;
}