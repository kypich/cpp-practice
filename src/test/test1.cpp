#include <iostream>

using namespace std;

int sum(int *x, int *y) {
    return *x + *y;
}

int main() {
    int lol = 10;
    int lol1 = 20;
    cout << sum(&lol, &lol1) << endl;
}