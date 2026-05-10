#include <iostream>
#include <climits>
using namespace std;

void printArray(int array[], int index, int size) {
    if (index == size) {
        return;
    }

    cout << array[index] << " ";
    printArray(array, index + 1, size);
}

int sumArray(int array[], int index, int size) {
    if (index == size) {
        return 0;
    }

    return array[index] + sumArray(array, index + 1, size);
}

int findMax(int array[], int index, int size) {
    if (index == size - 1) {
        return array[index];
    }

    int maxFromRest = findMax(array, index + 1, size);

    if (array[index] > maxFromRest) {
        return array[index];
    }

    return maxFromRest;
}

int sumPositive(int array[], int index, int size) {
    if (index == size) {
        return 0;
    }

    if (array[index] > 0) {
        return array[index] + sumPositive(array, index + 1, size);
    }

    return sumPositive(array, index + 1, size);
}

int main() {
    const int size = 5;
    int array[size];

    cout << "Enter 5 array elements:" << endl;

    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << endl;

    cout << "Array elements:" << endl;
    printArray(array, 0, size);

    cout << endl;

    cout << "Sum of elements = " << sumArray(array, 0, size) << endl;
    cout << "Maximum element = " << findMax(array, 0, size) << endl;
    cout << "Sum of positive elements = " << sumPositive(array, 0, size) << endl;

    return 0;
}
