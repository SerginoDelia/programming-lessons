// Nested If

/*
Max of 3 numbers

Start
    Print "Enter 3 numbers "
    Read a, b, c

    if (a > b AND a > c) 
        Print a
    else
        if (b > c)
            Print c
        else 
            Print c  
*/

#include <iostream>
using namespace std;

int main() {

    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << a << endl;
    } else if (b > c) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }

    return 0;
}