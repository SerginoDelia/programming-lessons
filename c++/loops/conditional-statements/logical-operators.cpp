/*
Logical Operators

&& - AND
|| - OR
! - NOT

Relational Operators
<
>
<=
>=
!=

if (hour >= 9 && hour <= 18) then
    Print "Working"
else 
    Print "Leisure"
*/

#include <iostream>
using namespace std;

int main() {

    int hour;

    cout << "Enter the time: ";
    cin >> hour;

    if (hour >= 9 && hour <= 18) {
        cout << "Working" <<endl;
    } else {
        cout << "Leisure";
    }

    return 0;
}
