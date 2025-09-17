/*
Dynamic Declaration

Heap

Stack
    activation recall of main function
    once the if block ends the memory is gone

    in C++ the variables must be declared
    some may not be used but they will occupy the memory

Code Section
    main

int main() {

    int a,b,c;

    if(int k=exp; k < a) { // the live of this k variable will only be limited to this if block
                            // once the block ends it will be removed from memory
    }
}
*/

#include <iostream>
using namespace std;

int main() {
    // C++ allows the declaration of variables whereever you like,
    // you can declare them where you are using them

    int a=10, b=5;
    return 0;

    {
        // we can make an empty block and declare c, c is only available inside the block
        int c = a+b;

    if (true) { // declaring c ony to use it as a condition inside the if block
        int c = a+b;  // c is available inside the if block
        cout << c << endl;
    }
    }

    // or we can declare the variable inside if -- allowed from C++ 17 only
    if (int c = a+b; c > 10) {

    }
}
