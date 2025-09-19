/*
All years which are perfectly divisible by 4 are leap years except for century years
(years ending with 00) which is leap year only if it is perfectly divisible by 400.

For example: 2012, 2004, 1968 etc are leap years but, 1971, 1600, 2000, 2400 are leap years,
but, 1700, 1800, 1900 etc are not

In this program below, user is asked to enter a year and this program checks whether the year entered 
by the user is a leap year or not
*/

#include <iostream>
using namespace std;

int main() {

    int year; 
    cout<<"Enter a year: ";
    cin>>year;

    if (year % 400 == 100 || year % 400 == 200 || year % 400 == 300) {
        cout<<year<<" Is not a leap year."<<endl;
    } else if (year % 4 == 0) {
        cout<<year<<" Is a leap year."<<endl;
    } else {
        cout<<year<<" is not a leap year";
    }
    return 0;
}