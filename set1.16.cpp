#include <stdio.h>

void printPattern(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = i; j <= rows; ++j) {
            printf("%d", j);
        }
        for (int k = 1; k < i; ++k) {
            printf("%d", k);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPattern(rows);

    return 0;
}

