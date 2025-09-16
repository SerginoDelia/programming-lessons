// Demo Enum and Typedef

#include <iostream>
using namespace std;
enum day {mon=1, tue, wed, thu, fri, sat, sun};
// enum is used for defining a group of constants under one name
enum dept {cs,it,ec,mech};

typedef int marks;

int main() {

    day d;
    d = mon;
    cout <<d<<endl;
    cout <<mon<<endl;
    cout <<tue<<endl;
    cout <<wed<<endl;
    cout <<thu<<endl;
    cout <<fri<<endl;
    cout <<sat<<endl;
    cout <<sun<<endl;

    // m1 and m2 are storing marks
    marks m1,m2;

    return 0;
}