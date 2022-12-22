#define _CRT_SECURE_NO_WARNINGS
#include"array.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>

int** memory(int sizeofrows, int sizeofcols) {
    int** mas;
    mas = (int**)calloc(sizeofrows, sizeof(int*));
    for (int i = 0; i < sizeofrows; i++)
    {
        mas[i] = (int*)calloc(sizeofcols, sizeof(int));
    }
    return mas;
}

void array_input_manually(int*** mas, int sizeofrows, int sizeofcols) {
    for (int i = 0; i < sizeofrows; i++) {
        for (int j = 0; j < sizeofcols; j++) {
            printf("Enter mas[%d][%d]: ", i, j);
            while (scanf("%d", &(*mas)[i][j]) == 0 , getchar() != '\n') {
                printf("\nWrite a correct numbers\n");
                rewind(stdin);
            }
        }
    }
}

int array_size_input(int arrsize) {
    while (scanf("%d", &arrsize) == 0, arrsize < 1, getchar() != '\n') {
        printf("\nWrite a correct numbers\n");
        rewind(stdin);
    }
    return arrsize;
}

void print_array(int** arr, int sizeofrows, int sizeofcols) {
    for (int i = 0; i < sizeofrows; i++) {
        for (int j = 0; j < sizeofcols; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
}

int saddle_point(int*** arr, int sizeofrows, int sizeofcols) {
    int col_min_index = 0, row_max = 0, col_min = 0, row_max_and_col_index = 0;
    for (int i = 0; i < sizeofrows; i++) {
        row_max = (*arr)[i][0];
        for (int j = 0; j < sizeofcols; j++) {
            if (row_max < (*arr)[i][j]) {
                row_max = (*arr)[i][j];
                row_max_and_col_index = j;
            }
        }
        col_min = (*arr)[0][row_max_and_col_index];
        for (int k = 0; k < sizeofrows; k++) {
            if (col_min > (*arr)[k][row_max_and_col_index]) {
                col_min = (*arr)[k][row_max_and_col_index];
                col_min_index = k;
            }
        }
        if (col_min == row_max) return col_min_index;
    }
    return -1;
}

void delete_saddle_point(int*** arr, int sizeofrows, int sizeofcols, int col_min_index) {
    if (col_min_index >= 0) {
        sizeofrows--;
        for (int n = col_min_index; n < sizeofrows; n++) {
            for (int j = 0; j < sizeofcols; j++)
                (*arr)[n][j] = (*arr)[n + 1][j];
        }
        (*arr) = (int**)realloc((*arr), sizeofrows * sizeof(int*));
    }
}

void delete_memory(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
}