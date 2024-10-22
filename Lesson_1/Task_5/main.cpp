#include <iostream>

using namespace std;

int main() {
    int height = -1;
    char space = ' ';
    char elem = '*';

    cout << "Enter the height of the Christmas tree:" << endl;
    cin >> height;

    cout << "Your Christmas tree:" << endl;

    // Draw the upper part of the Christmas tree
    for (int row = 0; row < height; ++row) {
        for (int spaceCount = 0; spaceCount < height - row - 1; ++spaceCount) {
            cout << space;
        }
        for (int elemCount = 0; elemCount < 2 * row + 1; ++elemCount) {
            cout << elem;
        }
        cout << endl;
    }

    // Draw the trunk of the Christmas tree
    for (int row = 0; row < height - 1; ++row) {
        cout << space;
    }
    cout << elem << endl;

    return 0;
}
