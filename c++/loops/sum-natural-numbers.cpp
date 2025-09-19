/*
Sum or natural numbers


n=9, i=1, sum=6
i | sum = sum + i
1 --> 0 + 1 = 1
2 --> 1 + 2 = 3
3 --> 3 + 3 = 6
4 --> 6 + 4 = 10
5 --> 10 + 5 = 15
6 --> 15 + 6 = 21
7 --> 21 + 7 = 28
8 --> 28 + 8 = 36
9 --> 36 + 9 = 45
*/

#include <iostream>
using namespace std;

int main() {

    int i, n, sum=0;

    cout<<"Enter number: ";
    cin>>n;

    for (i=1; i<=n; i++) {
        sum += i;
    }

    // using a while loop
    // int i=1, n, sum=0;

    // cout<<"Enter number: ";
    // cin>>n;

    // while (i <= n) {
    //     sum += 1;
    //     i++;
    // }

    cout<<"Sum of number "<<n<<" is "<<sum;

    return 0;
}