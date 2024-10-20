#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i) {
        int count = 1;
        bool alreadyCounted = false;

    
        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                alreadyCounted = true;
                break;
            }
        }

        if (!alreadyCounted) {
        
            for (int j = i + 1; j < n; ++j) {
                if (arr[i] == arr[j]) {
                    ++count;
                }
            }
            cout << arr[i] << " appears " << count << " times" << endl;
        }
    }

    return 0;
}

