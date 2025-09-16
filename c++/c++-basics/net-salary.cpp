/*
Write a program to calculate Net Salary
Program should take the following input
1. Basic Salary
2. Percentage of Allowances
3. Percentage of Deductions

NetSalary = Basic Salary + Basic Salary * Percentage of Allowance - Basic Salary * Percentage of Deductions

*/

#include <iostream>
using namespace std;

int main() {
    
    float basic, percentAllow, percentDeduct, netSalary;

    cout << "Enter Basic Salary ";
    cin >> basic;
    cout << "Enter percent of Allowance ";
    cin >> percentAllow;
    cout << "Enter percent of Deductions ";
    cin >> percentDeduct;


    netSalary = basic + basic * percentAllow/100 - basic * percentDeduct/100;
    cout << "Your Net Salary is: " << netSalary<<endl;

    return 0;
}