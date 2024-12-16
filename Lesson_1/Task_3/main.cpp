#include <iostream>

using namespace std;

int main() {
    int one, two;
    char symbol;

    cout << "Enter the first number: ";
    cin >> one;
    cout << "Enter the second number: ";
    cin >> two;
    cout << "Choose an action (+, -, *, /): ";
    cin >> symbol;

    if (symbol == '+' || symbol == '-' || symbol == '*' || (symbol == '/' && two != 0)) {
        int result = (symbol == '+') ? one + two :
                         (symbol == '-') ? one - two :
                         (symbol == '*') ? one * two :
                         one / two;

        cout << "Result: " << result << endl;
    } else if (symbol == '/' && two == 0) {
        cout << "ERROR: Division by zero" << endl;
    } else {
        cout << "ERROR: Invalid operation" << endl;
    }

    return 0;
}
