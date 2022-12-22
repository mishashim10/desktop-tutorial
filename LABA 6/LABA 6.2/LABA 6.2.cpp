#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include "array.h"
int main() {
	int** arr = 0;
	int sizeofrows = 0, sizeofcols = 0, k = 0, sum;
	printf("Enter size rows and cols of array: \n");
	printf("Rows: ");
	sizeofrows = array_size_input(sizeofrows);
	printf("Cols: ");
	sizeofcols = array_size_input(sizeofcols);
	arr = memory(sizeofrows, sizeofcols);
	input_array(arr, sizeofrows);
	output_array(arr, sizeofrows, sizeofcols);
	k = row_kth(k);
	for (int i = 0; i < sizeofrows; i++) {
		sum = 0;
		for (int j = 0; j < sizeofcols; j++) {
			if (arr[i][j] > 0)
			sum = sum + arr[i][j];
			arr[i][sizeofcols] = sum;
		}
	}
	output_array(arr, sizeofrows, sizeofcols);
	free(arr);
	return 0;
}