// Create a simple calculaotr app with switch case

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, result;
    char opr;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter an operator: ";
    cin >> opr;

    switch (opr)
    {
        //ADD
    case '+':
        result = num1 + num2;
        break;
    case '-':
        // MINUS
        result = num1 - num2;
        break;
    case '*':
        //MULTI
        result = num1 * num2;
        break;  
    case '/':   
        //DIV
        result = num1 / num2;
        break;
    default:
        cout << "Invalid operator";
    }

    cout << "Result: " << result;
    return 0;
}