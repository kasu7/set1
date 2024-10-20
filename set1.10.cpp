#include <iostream>

using namespace std;

void printParallelogram(int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        
        for (int j = 0; j < i; ++j) {
            cout << " ";
        }
    
        for (int k = 0; k < columns; ++k) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    printParallelogram(rows, columns);

    return 0;
}

