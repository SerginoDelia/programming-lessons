#include <iostream>
using namespace std;

int main() {

    int i=0;
    while (i<10) {
        cout<<"Hello\n";
        i++;
    }

    i = 0;
    do {
        cout<<"Hello from do while loop\n";
    } while (i < 10);

    for (int i=0; i < 10; i++) {
        cout<<"Hello from for loop\n";
    }

    return 0;
}