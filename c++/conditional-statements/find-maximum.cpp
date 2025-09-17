// Find maximum of 2 numbers: x and y

/*
Input
Process
Output

Start 
    Print "Enter 2 Numbers"
    Read x,y

Condition
    if true
        Print "Max is x"
    if false
        Print "Max is y"

Stop

Algorithm Max

Begin
    Print "Enter 2 numbers";
    Read x, y
    if x > y then
    Begin
        Print "Max is ", x;
    else
        Pring "Max is ", y;
    end
*/

#include <iostream>
using namespace std;

int main() {

    int x, y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;

    if ( x > y) {
        cout << "Max is " << x << endl;
    } else {
        cout << "Max is " << y << endl;
    }

    return 0;
}

