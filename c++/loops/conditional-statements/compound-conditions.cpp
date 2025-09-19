/*
 12 - 50 = young person

 Start 
    Pring "Enter age "
    Read age

    if (age >= 12 AND age <= 50)
        Print "Young"
    else
        Pring "Not young"
*/

#include <iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter age: ";
    cin >> age;
    if (age >= 12 && age <= 50) { // braces are optional if there is only one line of code
        cout << "Young" << endl;
    } else {
        cout << "Not young" << endl;
    }

    if (age < 12 || age > 50) // braces are optional if there is only one line of code
        cout << "Eligible" << endl;
    else
        cout << "Not eligible" << endl;    

    return 0;
}