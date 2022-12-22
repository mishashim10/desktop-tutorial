#include"arrays.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main() {
	int* arr = NULL;
	int arrsize = 0;
	int size = 0, index = 0;
	printf("Enter a size of array: ");
  arrsize = array_size_input(arrsize);
  array_creation(&arr, arrsize);
  array_input(arr, arrsize);
  array_output(arr, arrsize);
  printf("\n");
  size = number_of_prime_numbers(&arr, &arrsize);
  function(size, &arr, &arrsize, index);
  printf("Updated array: \n");
  array_output(arr, arrsize);
  printf("\n");
  free(arr);
  return 0;
}