#include <iostream>

using namespace std;

bool isPalindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; ++i) {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter 5 integers: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    if (isPalindrome(arr, SIZE)) {
        cout << "The array is in palindrome order." << endl;
    } else {
        cout << "The array is not in palindrome order." << endl;
    }

    return 0;
}

