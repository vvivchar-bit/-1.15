#include <iostream>
#include <stdexcept>
using namespace std;

void printForward(int current, int n) {
    if (current > n) {
        return;
    }

    cout << current << " ";
    printForward(current + 1, n);
}

void printBackward(int n) {
    if (n < 1) {
        return;
    }

    cout << n << " ";
    printBackward(n - 1);
}

int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    try {
        if (n <= 0) {
            throw invalid_argument("N must be greater than zero.");
        }

        cout << "Numbers from 1 to N:" << endl;
        printForward(1, n);

        cout << endl << endl;

        cout << "Numbers from N to 1:" << endl;
        printBackward(n);

        cout << endl;
    }
    catch (const exception& error) {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}