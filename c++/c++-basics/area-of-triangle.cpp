/*
Input
Process 
Output

Area = (b * h) / 2
    output = Area
    input = (b * h) / 2 

Start

Print "Enter base and height"
Read b, h

Process:
a <-- (b * h) / 2

Output

Print "Area is ", a

Stop

Algorithm Area

Begin
    Print "Enter base and height";
    Read b, h
    a <-- (b * h) / 2

    Print "Area is ", a
*/

#include <iostream>
using namespace std;

int main() {

    float b, h, a;

    cout << "Enter base and height ";
    cin >> b >> h;
    a = (b * h) / 2;
    cout << "Area is: " << a;

    return 0;
}