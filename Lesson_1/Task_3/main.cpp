#include <iostream>

using namespace std;

int main()
{
    int one , two , act;
    char symbol;
    const char* name;

    cout  <<"The first number:" << endl;
    cin >> one;
    cout  <<"The second number:" << endl;
    cin >> two;
    cout  <<"Please, choose an action:" << endl;
    cin >> symbol;

    switch(symbol)
    {
        case '+':
        {
            act = one+two;
            name = "Sum";
            break;
        }
        case '-':
        {
            act = one-two;
            name = "Minus";
            break;
        }
        case '*':
        {
            act = one*two;
            name = "Multiply";
            break;
        }
        case '/':
        {
            act = one/two;
            name = "Divide";
            break;
        }
        default: cout << "ERROR" << endl; return -1;
    }

    cout << name << " two numbers: " << act << endl;
    return 0;
}
