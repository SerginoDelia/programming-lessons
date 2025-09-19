/*
Perfect number

n = 8 --> (1, 2, 4, 8)
sum = 0

Perfect number n = 8 --> 2 * 8 = 16
Sum of factors 8 = 15
16 is not equal to 15
8 is not a perfect number

Example: n = 6
6 * 2 = 12
1+2+3+6 = 12
6 is a perfect number

i | if(n%i)==0 | sum = sum + i
1 | 8 % 1 == 0 | 0 + 1 = 1
2 | 8 % 2 == 0 | 1 + 2 = 3
3 | 8 % 2 == 2 | 
4 | 8 % 1 == 0 | 3 + 4 = 7
5 | 8 % 5 == 3 | 
6 | 8 % 6 == 2 | 
7 | 8 % 7 == 1 | 
8 | 8 % 8 == 0 | 7 + 8 = 15

Start
    Print "Enter n"
    Read n
    i <-- 1
    
    if (i <= n) -- True
        if (n % i = 0)
            print(i)
    if <-- i + 1

    if (i <= n) -- False
Stop
*/

#include <iostream>
using namespace std;

int main() {

    int n,i,sum=0;
    cout<<"Enter a number: ";
    cin>>n;

    for (i=1; i<=n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (n * 2 == sum) {
        cout<<"Perfect number"<<endl;
    } else {
        cout<<"Not a perfect number"<<endl;
    }

    return 0;
}