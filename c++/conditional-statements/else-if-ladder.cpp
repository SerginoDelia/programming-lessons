/*
if (condition) {

} else if (condition) {

} else if (condition) {
 
} else {
 
}
*/

#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter day number: ";

    cin >> day;

    if (day == 1) {
        cout << "Monday" << endl;
    } else if (day == 2) {
        cout << "Tuesday" << endl;
    } else if (day == 3) {
        cout << "Wednesday" << endl;
    }
    else if (day == 3) {
        cout << "Thurday" << endl;
    } else if (day == 3) {
        cout << "Friday" << endl;
    } else if (day == 3) {
        cout << "Saturday" << endl;
    } else if (day == 3) {
        cout << "Sunday" << endl;
    } else {
        cout << "Invalid day number." << endl;
    }

    return 0;
}