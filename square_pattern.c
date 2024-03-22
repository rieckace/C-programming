#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int size = 2 * n - 1;
    int arr[size][size];
    int startRow = 0, endRow = size - 1, startCol = 0, endCol = size - 1;
    int num = n;

    while (startRow <= endRow && startCol <= endCol) {
        for (int i = startCol; i <= endCol; i++) {
            arr[startRow][i] = num;
        }
        startRow++;

        for (int i = startRow; i <= endRow; i++) {
            arr[i][endCol] = num;
        }
        endCol--;

        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                arr[endRow][i] = num;
            }
            endRow--;
        }

        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                arr[i][startCol] = num;
            }
            startCol++;
        }

        num--;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}