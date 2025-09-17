#include <iostream>
#include <string>

using namespace std;

// Создание классов и объектов
class Building {
private:
    int year;
    string type;
public:
    void set_data(int y, string t) {
        year = y;
        type = t;
    }

    void get_info() {
        cout << "Type: " << type << ". Year: " << year << '\n';
    }
};

int main() {

    Building school;
    // school.type = "School";
    // school.year = 2000;
    school.set_data(2000, "School");
    school.get_info();
    
    Building house;
    // house.type = "House";
    // house.year = 2010;
    house.set_data(2010, "House");
    house.get_info();
    

    return 0;
}