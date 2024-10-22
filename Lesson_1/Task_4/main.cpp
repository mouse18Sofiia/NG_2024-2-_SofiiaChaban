#include <iostream>

using namespace std;

int main()
{
    int salary;
    cin >> salary;

    if (salary < 1000) {
        cout << "Work more!" << endl;
    }
    if (salary > 1000) {
        if (salary < 1000000) {
            cout << "You're great!" << endl;
        }
    }
    if (salary > 1000000) {
        cout << "You are a millionaire!" << endl;
    }

    return 0;
}
