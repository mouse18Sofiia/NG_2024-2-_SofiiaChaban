#include <iostream>
using namespace std;

int main() {
    const int max_numbers = 20;
    int numbers[max_numbers];
    int entered_count = 0;

    cout << "Enter up to 20 numbers (enter 0 to complete entry):" << endl;
    for (int index = 0; index < max_numbers; ++index) {
        cout << "Enter value: ";
        cin >> numbers[index];

        if (numbers[index] == 0) {
            break;
        }
        entered_count++;
    }

    int max_value = 0;
    for (int index = 0; index < entered_count; ++index) {
        if (numbers[index] > max_value) {
            max_value = numbers[index];
        }
    }

    cout << "\nLet's draw figures:\n";
    for (int index = 0; index < entered_count; ++index) {
        int stars_count = numbers[index];
        int spaces = (max_value - stars_count) / 2;

        for (int space_index = 0; space_index < spaces; ++space_index) {
            cout << " ";
        }

        for (int star_index = 0; star_index < stars_count; ++star_index) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
