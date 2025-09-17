#include <iostream>
#include <string>

using namespace std;

// Создание классов и объектов
class Building {
private:
    int year;
    string type;
public:
    // Конструктор
    Building(int y, string t) {
        this->set_data(y, t);
    }

    Building(int y) {
        year = y;
    }

    Building() {}

    void set_data(int year, string type) {
        this->year = year;
        this->type = type;
    }

    void get_info() {
        cout << "Type: " << type << ". Year: " << year << '\n';
    }

    // Деструктор
    ~Building() {
        cout << "Delete object" << '\n';
    }

};

int main() {

    Building school(2000, "School");
    school.get_info();
    
    Building house(2010);
    house.get_info();
    

    return 0;
}