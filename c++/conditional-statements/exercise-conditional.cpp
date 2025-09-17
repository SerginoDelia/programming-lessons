/*
Write a program to offer discounts on total bill Amount
Program should take Total Amount as an input and calculate discount

If bill amount < 100 no discount
If bill amount is >= 100 and less than 500 then 10% discount
If bill amount is >= 500 the 20% discount
*/

#include <iostream>
using namespace std;

int main() {

    float billAmount, discount=0.0;
    cout<<"Enter bill amount: ";
    cin>>billAmount;

    if (billAmount >= 500) {
        discount = billAmount * 20/100;
    } else if (billAmount >= 100 && billAmount < 500) {
        discount = billAmount * 10/100;
    }

    cout<<"Bill Amount is: "<<billAmount<<endl;
    cout<<"Discount is: "<<discount<<endl;
    cout<<"Discount amount is: "<<billAmount - discount<<endl;

    return 0;
}