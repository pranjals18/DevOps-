// Create a simple calculaotr app with switch case

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, result;
    char operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator: ";
    cin >> operation;
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;  
    case '/':   
        result = num1 / num2;
        break;
    case '%':
       result=num1%num2;
       break;

    case '^':
       result=pow(num1,num2);
       break;

    default:
        cout << "Invalid operator";
    }
    cout << "Result: " << result;
    return 0;
}