#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the triangle: ";
    cin >> size;

    int state = 0;

    while (true) {
        cout << "\033[2J\033[1;1H";

        switch (state % 4) {
        case 0:  // Original triangle
            for (int i = 1; i <= size; ++i) {
                for (int j = 1; j <= i; ++j) {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 1:  // 90 degrees right
            for (int i = 1; i <= size; ++i) {
                for (int j = 0; j < size - i; ++j) {
                    cout << " ";
                }
                for (int j = 0; j < i; ++j) {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 2:  // Inverted Triangle
            for (int i = size; i >= 1; --i) {
                for (int j = 1; j <= i; ++j) {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        case 3:  // 90 degrees left
            for (int i = 1; i <= size; ++i) {
                for (int j = 1; j < i; ++j) {
                    cout << " ";
                }
                for (int j = 0; j <= size - i; ++j) {
                    cout << "*";
                }
                cout << endl;
            }
            break;
        }

        state++;
        this_thread::sleep_for(chrono::milliseconds(700));
    }

    return 0;
}
