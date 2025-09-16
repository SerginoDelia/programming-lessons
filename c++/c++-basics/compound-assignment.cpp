// Compound Assignment

#include <iostream>
using namespace std;

int main() {

    int a = 10, b = 5, c =15;
    int sum = 5;

    // sum = sum + a
    sum += a;

    // sum = sum + a + b + c;
    // sum = sum + a
    // sum += a;
    // sum = sum + b
    // sum += b;
    // sum = sum + c
    // sum += c;

    sum += a + b + c;

    return 0;
}