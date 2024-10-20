#include <iostream>

using namespace std;

int main() {
    const int SIZE = 7;
    int arr[SIZE];


    cout << "Enter 7 integers: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }


    for (int i = 0; i < SIZE / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[SIZE - i - 1];
        arr[SIZE - i - 1] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

