// Infinite Loop
#include <iostream>
using namespace std;

int main() {

    // int i=0;
    // for (; i<10; ) {
    //     cout<<i<<" Hello";
    //     i++;
    // }

    // infinite loop
    // int i=0;
    // for (;; ) {
    //     cout<<i<<" Hello";
    //     i++;
    // }

    // Using break;
    int i=0;
    for (;;) {
        cout<<i<<" Hello";
        i++;
        if (i>10) {
            break;
        }
    }

    return 0;
}