#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2, result;
    char op;
    char choice;

    do
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        cout << "Enter an operator (+, -, *, /, %, ^, s for sqrt, a for abs, l for log): ";
        cin >> op;

        switch (op)
        {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            break;
        case '%':
            if (num2 == 0)
            {
                cout << "Error: Modulus by zero is not allowed." << endl;
            }
            else
            {
                result = num1 % num2;
                cout << "Result: " << result << endl;
            }
            break;
        case '^':
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case 's':
            cout << "Square root of " << num1 << " is " << sqrt(num1) << endl;
            break;
        case 'a':
            cout << "Absolute value of " << num1 << " is " << abs(num1) << endl;
            break;
        case 'l':
            if (num1 <= 0)
            {
                cout << "Error: Logarithm is undefined for zero or negative values." << endl;
            }
            else
            {
                cout << "Natural logarithm of " << num1 << " is " << log(num1) << endl;
            }
            break;
        default:
            cout << "Invalid operator. Please try again." << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;

    return 0;
}
