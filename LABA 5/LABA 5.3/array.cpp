#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int delete_after_element(int element_delete) {
    printf("Delete elements of a row greater than this number: ");
    while (scanf_s("%d", &element_delete) == 0 , element_delete < 1 , getchar() != '\n') {
        printf("\nWrite a correct numbers\n");
        rewind(stdin);
    }
    return  element_delete;
}

void print_array(int** arr, int sizeofrows) {
    for (int i = 0; i < sizeofrows; i++) {
        int j = 0;
        while (arr[i][j] != 0) {
            printf("%4d ", arr[i][j]);
            j++;
        }
        printf("\n");
    }
}

int array_size_input(int arrsize) {
    while (scanf_s("%d", &arrsize) == 0 , arrsize < 1 , getchar() != '\n') {
        printf("\nWrite a correct numbers\n");
        rewind(stdin);
    }
    return arrsize;
}

void input_array(int** arr, int sizeofrows) {
    for (int i = 0; i < sizeofrows; i++) {
        int j = 0;
        printf("Input element array[%d][%d]: ", i, j);
        j++;
        arr[i] = (int*)realloc(arr[i], j * sizeof(int));
        while (scanf_s("%d", &arr[i][j-1]) != 0 && arr[i][j-1] != 0) {
            printf("Input element array[%d][%d]: ", i, j + 1);
            j++;
            arr[i] = (int*)realloc(arr[i], j * sizeof(int));
        }
    }
}

void delete_element(int** arr, int sizeofrows, int element_delete) {
    for (int i = 0; i < sizeofrows; i++) {
        int col = 0;
        int j = 0;
        while (arr[i][j] != 0) {
            col++;
            j++;
        }
        col++;
        for (int k = 0; k < col; k++) {
            if (arr[i][k] > element_delete) {
                col--;
                for (int g = k; g < col; g++) {
                    arr[i][g] = arr[i][g + 1];
                }
                arr[i] = (int*)realloc(arr[i], col * sizeof(int));
                k--;
            }
        }
    }
}

void delete_memory(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
}