#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10; // You can adjust the size as needed
    int arr[SIZE];
    int searchNumber, index = -1;

    cout << "Enter 10 integers: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the number to search for: ";
    cin >> searchNumber;

    for (int i = 0; i < SIZE; ++i) {
        if (arr[i] == searchNumber) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "The number " << searchNumber << " is found at index " << index << "." << endl;
    } else {
        cout << "The number " << searchNumber << " is not found in the array." << endl;
    }

    return 0;
}

