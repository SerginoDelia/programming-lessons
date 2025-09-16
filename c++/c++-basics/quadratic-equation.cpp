/*
Finding Roots of a Quadratic Equation
ax^2 + bx + c = 0

Start
    Print "Enter a, b, c"
    Read a, b, c

Process
    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a)
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a)

Output 
    Print "Roots are " r1, r2

Stop
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float a, b, c, r1, r2;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Roots are " << r1 << " " << r2;

    return 0;
}