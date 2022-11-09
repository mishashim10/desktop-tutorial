#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
    int arr[100][100];
    int row = 0, col = 0;
    printf("Enter rows and cols: \n");
    srand(time(NULL));
    while (scanf("%d", &row) != 1 || getchar() != '\n' || row < 1 || row > 100) {
        printf("try again\n");
        rewind(stdin);
    }
    while (scanf("%d", &col) != 1 || getchar() != '\n' || col < 1 || col > 100) {
        printf("try again\n");
        rewind(stdin);
    }
    char mass[50];
    printf("If you want to enter data into the array, enter 'yes'\n");
    scanf("%s", &mass);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (strcmp("yes", mass) == 0) {
                printf("Array number %d = ", i + 1);
                while (scanf("%d", &arr[i][j]) != 1) {
                    printf("Wrong imput. Try again\n");
                    printf("Array number %d = ", i + 1);
                    rewind(stdin);
                }
            }
            else {
                arr[i][j] = rand() % 200 - 100;
                printf("%d Random number is : %d\n", i + 1, arr[i][j]);
            }
        }
    }
    int index = -1;
    for (int j = 0; j < col; j++) {
        int firstcol = 0;
        for (int i = 0; i < row; i++) {
            if (arr[i][j] > 0) {
                firstcol++;
            }
            else {
                firstcol = 0;
                break;
            }
        }
        if (firstcol == row) {
            index = j;
            break;
        }
    }
    for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                printf("%3.1d ", arr[i][j]);
            }
            printf("\n");
        }
    if (index == -1)
    {
        printf("no positive column");
    }
    else
    {
        printf("Column number with all positive numbers: %d\n", index + 1);
        if (index > 0) {
            for (int i = 0; i < row; i++) {
                arr[i][index - 1] = -arr[i][index - 1];
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                printf("%3.1d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}