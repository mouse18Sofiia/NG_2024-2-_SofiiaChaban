#include <iostream>

using namespace std;

int main() {
    const int size = 5;
    int numbers[size];

    cout << "Please, enter 5 numbers:" << endl;
    for (int symbol = 0; symbol < size; ++symbol) {
        cin >> numbers[symbol];
    }

    cout << "You entered: ";
    for (int symbol = 0; symbol < size; ++symbol) {
        cout << numbers[symbol];
        if (symbol < size - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
