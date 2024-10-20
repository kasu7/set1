#include <stdio.h>

void printPattern(int rows, int columns) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
            printf("%d", j);
        }
        for (int j = columns - 1; j >= 1; --j) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printPattern(rows, columns);
    
    return 0;
}

