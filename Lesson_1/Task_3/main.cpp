#include <iostream>

using namespace std;

int main()
{
    int one, two, act;
    char symbol;

    cout << "The first number:" << endl;
    cin >> one;
    cout << "The second number:" << endl;
    cin >> two;
    cout << "Please, choose an action (+, -, *, /):" << endl;
    cin >> symbol;

    switch(symbol)
    {
    case '+':
    {
        act = one + two;
        cout << "Result: " << act << endl;
        break;
    }
    case '-':
    {
        act = one - two;
        cout << "Result: " << act << endl;
        break;
    }
    case '*':
    {
        act = one * two;
        cout << "Result: " << act << endl;
        break;
    }
    case '/':
    {
        if (two != 0) {
            act = one / two;
            cout << "Result: " << act << endl;
        } else {
            cout << "ERROR: Division by zero" << endl;
        }
        break;
    }
    default:
        cout << "ERROR: Invalid operation" << endl;
        return -1;
    }

    return 0;
}
