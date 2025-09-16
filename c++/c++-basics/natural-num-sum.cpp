/*
Finding the sum of first natural number

sum = n * (n+1)/2

ex: 
sum = 1 + 2 + 3 + 4 + 5 = 15
sum = 5 * 6 / 2 = 15

Start

Input
    Print "Enter n"
    Read n
Process
    sum <-- n * (n + 1) / 2
Output 
    Print "Sum is ", sum

Stop
*/

#include <iostream>
using namespace std;

int main() {

    int n, sum;

    cout << "Enter a number S";
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "Sum is: " << sum;

    return 0;
}

