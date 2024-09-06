// Sample C++ Program
#include <iostream>
using namespace std;

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

// Main function
int main() {
    // Variable declaration
    int num1, num2, sum;

    // Input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call to add the numbers
    sum = addNumbers(num1, num2);

    // Output the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    // Loop example
    cout << "\nCounting from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
