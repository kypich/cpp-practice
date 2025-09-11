#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main() {

    string str1 = "Hello";
    string str2 = "World";

    str1.append(str2);
    str1.pop_back();
    str1.push_back('!');
    str1.resize(5);
    cout << str1 << " - " << str1.length() << '\n';

    cout << pow(2, 3) << '\n';
    cout << abs(-3) << '\n';
    cout << sin(1) << '\n';
    cout << cos(1) << '\n';
    cout << sqrt(16) << '\n';
    cout << ceil(1.08f) << '\n'; // Окруление всегда к большему
    cout << floor(1.08f) << '\n'; // Окруление всегда к меньшему
    cout << round(1.55f) << '\n'; // округление к большему от 1.5+ как и всегда


    return 0;
}