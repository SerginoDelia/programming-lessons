// Write a program to calculate the Area of a Circle
// Take radius as input
// area = 3.14 * radius * radius

#include <iostream>
using namespace std;

int main() {

    float radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.1425 * radius * radius;
    cout << "The area is: " << area << endl;

    return 0;
}