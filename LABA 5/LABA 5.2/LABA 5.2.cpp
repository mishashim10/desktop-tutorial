#include"array.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<malloc.h>
int main() {
    int** arr = 0;
    int sizeofrows = 0, sizeofcols = 0;
    int col_min_index;
    printf("Enter size rows and cols of array: \n");
    sizeofrows = array_size_input(sizeofrows);
    sizeofcols = array_size_input(sizeofcols);
    arr = memory(sizeofrows, sizeofcols);
    array_input_manually(&arr, sizeofrows, sizeofcols);
    print_array(arr, sizeofrows, sizeofcols);
    col_min_index = saddle_point(&arr, sizeofrows, sizeofcols);
    if (col_min_index == -1) {
        printf("\nSaddle point wasnt find\n");
        free(arr);
        return 0;
    }
    delete_saddle_point(&arr, sizeofrows, sizeofcols, col_min_index);
    printf("\nUpdated array: \n");
    print_array(arr, sizeofrows, sizeofcols);
    delete_memory(arr, sizeofrows);
    free(arr);
    return 0;
}