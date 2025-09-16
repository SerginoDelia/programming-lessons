// helloworld.cpp - comment
#include <iostream> // import standard library
//import <print>; // you can import only those header files that the code needs, <print> gets access to the print functionality

int main() {
    int a, b, c;
    a = 10;
    b = 20;
    c = a + b;
    std::cout << c << std::endl;

    std::cout << "Hello World!\n";
}

/* This is a multi-line comment 
    The compiler will ignore it
*/