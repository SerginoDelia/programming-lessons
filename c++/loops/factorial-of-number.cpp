/*
Factorial n

n6 = 1 * 2 * 3 * 4 * 5 * 6 = 720

i | sum = sum * i
1 --> 1 * 1 = 1
2 --> 1 * 2 = 2
3 --> 2 * 3 = 6
4 --> 6 * 4 = 24
5 --> 24 * 5 = 120
6 --> 120 * 6 = 720
*/

#include <iostream>
using namespace std;

int main() {

    int i,n,fact=1;
    cout<<"Enter a number: ";
    cin>>n;

    for (i=1; i <= n; i++) {
        fact *= 1;
    }

    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
    cout<<n<<"! = "<<fact<<endl;

    return 0;
}