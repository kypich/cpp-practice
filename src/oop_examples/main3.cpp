#include <iostream>
#include <string>

using namespace std;

// Дружественные функции
class Car;
class Person {
private:
    int age;
    string name;
public:
    Person(string name) {
        this->name = name;
    }

    friend void info_car(Car &car, Person &person);
};

class Car {
private:
    string name;
public:
    Car(string name) {
        this->name = name;
    }

    friend void info_car(Car &car, Person &person);
};

void info_car(Car &car, Person &person) {
        cout << "A person with a name: " << person.name << ", has a car " << car.name << '\n';
    }

int main() {
    
    Car bmw("BMW");
    Person jhon("Jhon");
    info_car(bmw, jhon);


    return 0;
}