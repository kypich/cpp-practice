#include <iostream>
#include <string>

using namespace std;

// Наследование классов

class PC {
private:
    int diagonal;
    string os;
public:
    PC(int diagonal, string os) {
        this->diagonal = diagonal;
        this->os = os;
    }

    void get_info() {
        cout << "OS: " << os << '\n' << "Diagonal: " << diagonal << '\n';
    }
};

class Laptop: public PC {
private:
    float weight;
public:
    Laptop(int diagonal, string os, float weight): PC(diagonal, os) {
        this->weight = weight;
    }

    void get_info() {
        PC::get_info();
        cout << "Weight: " << weight << '\n';
    }
};

int main() {

    Laptop mac(16, "Mac", 1.5f);
    mac.get_info();

    return 0;
}