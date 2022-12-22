#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"arrays.h"
int array_size_input(int arrsize) {
	while (scanf("%d", &arrsize) == 0 || arrsize < 1 || getchar() != '\n') {
		printf("\nWrite a natural number\n");
		rewind(stdin);
	}
	return arrsize;
}

void array_creation(int** arr, int arrsize) {
	*arr = (int*)malloc(arrsize * sizeof(int));
}

void array_input(int* arr, int arrsize) {
	for (int i = 0; i < arrsize; i++) {
		printf("Enter a %d number of array: ", i + 1);
		while (scanf("%d", &arr[i]) == 0 || arr[i] < 1 || getchar() != '\n') {
			printf("\nWrite a natural number\n");
			rewind(stdin);
		}
	}
}

void array_output(int* arr, int arrsize) {
	for (int i = 0; i < arrsize; i++)
	printf("%d ", arr[i]);
}

int number_of_prime_numbers(int** arr, int* arrsize) {
	int size = 0;
	for (int i = 0; i < *arrsize; i++) {
		if ((*arr)[i] > 1) {
			for (int j = 2; j < (*arr)[i]; j++)
				if ((*arr)[i] % j == 0) {
					size++;
					break;
				}
		}
	}
	return size;
}

int index_of_prime_number(int** arr, int* arrsize) {
	int index = 0;
	for (int i = 0; i < *arrsize; i++) {
		if ((*arr)[i] > 1) {
			for (int j = 2; j < (*arr)[i]; j++) {
				if ((*arr)[i] % j == 0) {
					index = i;
					break;
				}
			}
		}
	}
	return index;
}

void delete_not_prime_number(int** arr, int* arrsize, int variable_where_we_will_pass_the_index) {
	int k = variable_where_we_will_pass_the_index;
	for (k; k < *arrsize; k++) {
		(*arr)[k] = (*arr)[k + 1];
	}
	*arrsize = *arrsize - 1;
	*arr = (int*)realloc(*arr, *arrsize * sizeof(int));
}

void function(int size, int** arr, int* arrsize, int index) {
	for (int i = 0; i < size; i++) {
		index = index_of_prime_number(arr, arrsize);
		delete_not_prime_number(arr, arrsize, index);
	}
}