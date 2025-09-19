// Multiplication Table
// n = 6
// 6 * 1 = 6
// 6 * 2 = 12
// ...
// 6 * 10 = 60

/*
Start

Print "Enter number"
Read n

i = 1

if i <= 10 --> True
    Print i * n

if i <= 10 -- False

Stop
*/

#include <iostream>
using namespace std;

int main() {

    int n,i;
    cout<<"Enter a number: ";
    cin>>n;

    for (i=1; i<=10; i++) {
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }

    return 0;
}