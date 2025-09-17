/*
Switch Case

Switch is a branch and control statement
Switch can have 0 or more cases
Each case is defined with a label
Depending on the value of expression in switch corresponding case black is executed
Is a case block is not available then default block is executed
Default block is optional
Every case block must terminate with break
If breaks are not mentioned then cases will fall thru
Switch is used for menu-driven programs

FILE
    New - 1
    Open - 2
    Save - 3
    Save As - 4

switch(expression) { // can have int or char type for expression
    case 1:
        break;
    
    case 2:
        break;

    default:
}

switch(expression) { // can have int or char type for expression
    case 'a':
        break;
    
    case 'b':
        break;

    default:
}

int main() {

    int day;
    cout << "Enter day number: ";
    cin >> day;

    switch(day) {
        case 1: cout << "Mon";
            break;
        case 2: cout << "Tues";
            break;
        case 3: cout << "Wed";
            break;
        case 4: cout << "Thu";
            break;
        case 5: cout << "Fri";
            break;
        case 6: cout << "Sat";
            break;
        case 7: cout << "Sun";
            break;
        default: cout << "Invalid day number"<<endl;
    }

    return 0;
}

*/

#include <iostream>
using namespace std;

int main() {

    int x = 1;

    // switch cases are faster than if/else
    switch(x) {
        case 1: cout << "One";
            break; // without break it will execute the next case until there is a break
        case 2: cout << "Two";
            break;
        case 3: cout << "Three";
            break;
        default: cout << "Invalid number"; // default block can be written anywhere inside the switch
    }

    cout<<endl<<endl; // add 2 space at the end.
    return 0;
}