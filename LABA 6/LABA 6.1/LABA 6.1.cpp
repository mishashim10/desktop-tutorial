#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include <malloc.h>
#include <time.h>
int main () {
    int* arr = 0;
    int n = 0;
    printf("Enter size of array: ");
    n = array_size_input(n);
    arr = memory(n);
    input_array(arr, n);
    clock_t t1 = clock();
    Hoara_sort(arr, 0, n-1);
    clock_t t2 = clock() - t1;
    printf("\n%lf\n", (double)t2 / (double)CLOCKS_PER_SEC);
    output_array(arr, n);
    printf("\nCompare:\n");
    bubble_sort(arr, n);
    output_array(arr, n);
    free(arr);
    return 0;
}