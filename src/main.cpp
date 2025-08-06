#include <iostream>

void check_win_warg(bool res) {
    if (res) {
        std::cout << "Ready" << std::endl;
    }
    else {
        std::cout << "Not" << std::endl;
    }
}

int main(void) {
    // Task 1
    {
        bool res = true;
        check_win_warg(res);
    }
    return 0;
}