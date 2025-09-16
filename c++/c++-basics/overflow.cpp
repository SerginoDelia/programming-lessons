/*
Overflow

Range of char 
    -128 to 127

char x = 127

    char take 1 byte = 8 bits
    01111111
    76543210

    if the first number is 0 the number is positive

what happens if we add one to char?
char x = 127;
++x;
cout << (int)x;

it will try to go to the next value which is no there

it will become -128

if it is -128 and you try to reduce it it will go to 127
    similar to hand clock
*/

#include <iostream>
using namespace std;

int main() {

    char x = 127;
    x++;
    cout <<(int) x<<endl;

    // if we assign 130 it will give us 125

    int y = INT_MAX;
    y++;
    cout <<(int)y<<endl; // it should print the smallest value

    return 0;
}