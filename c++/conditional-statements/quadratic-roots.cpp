/*
Nature of Root

Quadratic Equation
ax^2 + bx + c = 0

roots = (-b + sqrt(b^2 - 4 * a * c))/(2 * a)
        (b + sqrt(b^2 - 4 * a * c))/(2 * a)

discriminant
d = b^2 - 4 * a * c

if d = 0 --> real and equal
if d > 0 --> real and unequal
if d < 0 --> imaginary

int main() {
    float a,b,c,d,r1,r2

    cout << "Enter a, b, c";
    cin >>a>>b>>c;

    d = b * b - 4 * a * c;

    if (d == 0) {
        cout << "Roots are real and equal"
        cout << endl << (-b / (2 * a));
    }
    else if (d > 0) {
        cout << "Roots are real and unequal";
        cout << endl << (-b + sqrt(d))/(2*a);
        cout << endl << (b + sqrt(d))/(2*a);
    }
    else {
        cout << "Imaginary";
    }

}
*/

#include <iostream>
using namespace std;

int main() {

    int a,b,c,d,r1,r2;
    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;
    r1 = (-b + sqrt(d))/(2*a);
    r2 = (b + sqrt(d))/(2*a);
    
    if (d == 0) {
        cout << "Roots are real and equal";
        cout << endl<< r1;
    } else if (d > 0) {
        cout << "Roots are real and unequal";
        cout << endl << r2;
    } else {
        cout << "Imaginary";
    }

    return 0;
}