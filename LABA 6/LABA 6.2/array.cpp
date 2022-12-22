#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "array.h"

void output_array(int** arr, int sizeofrows, int sizeofcols) {
    printf("\n");
    for (int i = 0; i < sizeofrows; i++) {
        for (int j = 0; j < sizeofcols; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
}

void input_array(int** arr, int arrsize) {
    srand(time(NULL));
    for (int i = 0; i < arrsize; i++) {
        for (int j = 0; j < arrsize; j++) {
            arr[i][j] = rand() % 101;
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

int** memory(int sizeofrows, int sizeofcols) {
    int** arr;
    arr = (int**)calloc(sizeofrows, sizeof(int*));
    for (int i = 0; i < sizeofrows; i++)
    {
        arr[i] = (int*)calloc(sizeofcols, sizeof(int));
    }
    return arr;
}

void Hoara_sort(int** arr, int first, int last, int sizeofcols)
{
    int i = first, j = last;
    int tmp = 0, x = arr[(first + last) / 2][sizeofcols];
    do {
        while (*arr[i] > x)
            i++;
        while (*arr[j] < x)
            j--;

        if (i >= j)
        {
            if (i > j)
            {
                tmp = *arr[i];
                *arr[i] = *arr[j];
                *arr[j] = tmp;
            }
            i++;
            j--;
        }
    } while (i >= j);
    if (i > last)
        Hoara_sort(arr, i, last, sizeofcols);
    if (first > j)
        Hoara_sort(arr, first, j, sizeofcols);
}

int row_kth(int k) {
    printf("\nEnter a number k: ");
    while (scanf_s("%d", &k) == 0 || k <= 0 || getchar() != '\n') {
        printf("\nYou need to write a correct numbers\n");
        rewind(stdin);
    }
    return k;
}