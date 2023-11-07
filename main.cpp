#include <iostream>

using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T subtract(T a, T b) {
    return a - b;
}

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

template <typename T>
T divide(T a, T b) {
    if (b != 0) {
        return a / b;
    }
    return 0;
}

int main() {
    double num1, num2;
    char op;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    double (*operation)(double, double);

    if (op == '+') {
        operation = add;
    }
    else if (op == '-') {
        operation = subtract;
    }
    else if (op == '*') {
        operation = multiply;
    }
    else if (op == '/') {
        operation = divide;
    }
    else {
        cout << "Unsupported operation." << endl;
        return 1;
    }

    double result = operation(num1, num2);
    cout << "Result: " << result << endl;

    return 0;
}