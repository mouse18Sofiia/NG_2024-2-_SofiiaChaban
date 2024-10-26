#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void clearScreen() {
    cout << "\033[2J\033[1;1H"; //ANSI escape code to clear screen
}

void drawTriangle(int state) {
    clearScreen();

    switch (state % 4) {
    case 0:  // Original triangle
        cout << "*\n**\n***\n****\n*****" << endl;
        break;
    case 1:  // 90(right)
        cout << "    *\n   **\n  ***\n ****\n*****" << endl;
        break;
    case 2:  // Upside-down triangle
        cout << "*****\n****\n***\n**\n*" << endl;
        break;
    case 3:  // 90(left)
        cout << "*    \n**   \n***  \n**** \n*****" << endl;
        break;
    }
}

int main() {
    int state = 0;

    while (true) {
        drawTriangle(state);
        state++;
        this_thread::sleep_for(chrono::milliseconds(700));
    }

    return 0;
}
