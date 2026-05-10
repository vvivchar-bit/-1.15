#include <iostream>
#include <stdexcept>
using namespace std;

int power(int x, int y) {
    if (y < 0) {
        throw invalid_argument("Power must be non-negative.");
    }

    if (y == 0) {
        return 1;
    }

    return x * power(x, y - 1);
}

int main() {
    int x, y;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    try {
        cout << x << " to the power of " << y << " = " << power(x, y) << endl;
    }
    catch (const exception& error) {
        cout << "Error: " << error.what() << endl;
    }

    return 0;
}