/*
Factors of a number

n = 8 --> (1, 2, 4, 8)

i | if(n%i)==0 | print i
1 | 8 % 1 == 0 | 1
2 | 8 % 2 == 0 | 2
3 | 8 % 2 == 2 | 
4 | 8 % 1 == 0 | 4
5 | 8 % 5 == 3 | 
6 | 8 % 6 == 2 | 
7 | 8 % 7 == 1 | 
8 | 8 % 8 == 0 | 8

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

    int n,i;
    cout<<"Enter a number: ";
    cin>>n;

    for (i=1; i<=n; i++) {
        if (n % i == 0) {
            cout<<i<<endl;
        }
    }

    return 0;
}