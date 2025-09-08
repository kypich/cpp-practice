#include <iostream>

using namespace std;

struct options {
    const char* ip;
    int port;
    int timeout_ms;
};

void kek(struct options *o) {
    cout << o->timeout_ms << endl;
}
void lol(struct options *o) {
    cout << o->timeout_ms + 5 << endl; 
}
void up(struct options *o) {
    cout << o->ip << endl;
}

int main() {
    struct options op;
    op.ip = "123";
    op.port = 123;
    op.timeout_ms = 34234441;

    kek(&op);
    lol(&op);
    up(&op);
}