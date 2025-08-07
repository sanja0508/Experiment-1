#include <iostream>
using namespace std;

// Function prototypes
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
float divide(int x, int y);

int main() {
    int num1, num2;

    cout << "Welcome to the Calculator \n";
    cout << "Please enter two whole numbers separated by a space: ";
    cin >> num1 >> num2;

    cout << "\nCrunching the numbers...\n\n";

    cout << "Sum: " << add(num1, num2) << "\n";
    cout << "Difference: " << subtract(num1, num2) << "\n";
    cout << "Product: " << multiply(num1, num2) << "\n";

    if (num2 != 0) {
        cout << "Quotient: " << divide(num1, num2) << "\n";
    } else {
        cout << "Cannot divide by zero! Please try again with a non-zero second number.\n";
    }

    cout << "\nThanks for using the Calculator\n";
    return 0;
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
    return (float)x / y;
}
