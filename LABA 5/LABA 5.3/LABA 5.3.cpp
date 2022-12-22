#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>
#include"array.h"
int main() {
    int** arr = 0;
    int sizeofrows = 0, element_delete = 0;
    printf("Enter a size of the rows: ");
    sizeofrows = array_size_input(sizeofrows);
    element_delete = delete_after_element(element_delete);
    arr = (int**)calloc(sizeofrows, sizeof(int*));
    input_array(arr, sizeofrows);
    print_array(arr, sizeofrows);
    delete_element(arr, sizeofrows, element_delete);
    printf("\nUpdated array: \n");
    print_array(arr, sizeofrows);
    delete_memory(arr, sizeofrows);
    return 0;
}