#include <iostream>

using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 integers: ";
    
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    int max_number = numbers[0];

    for (int i = 1; i < 5; ++i) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
    }

    cout << "Maximum number is: " << max_number << endl;

    return 0;
}

