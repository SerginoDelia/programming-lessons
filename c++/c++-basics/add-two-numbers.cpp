// How to write a program
// Input
// Process
// Output

// flowchart adding two numbers
/*
Print "Enter 2 numbers"
Read a,b
c <-- a + b
Print "Addtion is", c
Stop
*/


/*
Algo Add
Print "Enter 2 numbers"
Read a,b
c <-- a + b
Print "Addition is ", c
*/

#include <iostream>
using namespace std;

int main() {

    int a,b,c;
    cout << "Enter two numbers ";
    cin >> a >> b;
    c = a + b;

    cout << "Addition is " << c;

    return 0;
}