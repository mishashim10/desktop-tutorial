#include "Header.h"

int len_string(char* string) {
	int tmp = 0;
	while (string[tmp] != '\0') {
		tmp++;
	}
	return tmp;
}

void memory_alloc(char** string, int argc, char** argv) {
	for (int i = 1; i < argc; i++) {
		int strLen = len_string(argv[i]);
		string[i - 1] = (char*)calloc(strLen + 1, sizeof(char));
		string[i - 1][strLen] = '\0';
	}
}

void copy(char** string, int argc, char** argv) {
	for (int i = 1; i < argc; i++) {
		int str_len = len_string(argv[i]);
		for (int c = 0; c < str_len; c++)
			string[i - 1][c] = argv[i][c];
	}
}

void vary(char** left, char** right)
{
	char* tmp = *left;
	*left = *right;
	*right = tmp;
}

void Hoara_sort(char** string, int first, int last) {
	if (first < last) {
		int left = first;
		int right = last;
		int pivot = entrance(string[(left + right) / 2]);
		do {
			while (entrance(string[left]) < pivot)
				left++;
			while (entrance(string[right]) > pivot)
				right--;
			if (left <= right) {
				vary(&string[left], &string[right]);
				left++;
				right--;
			}
		} while (left < right);
		Hoara_sort(string, first, right);
		Hoara_sort(string, left, last);
	}
}

int minimal_len_word(char* string, int len_of_string) {
	int len_of_string_with_min_word = 0;
	int min_word = INT_MAX;
	while (len_of_string_with_min_word < len_of_string) {
		int len_of_min_word = 0;
		while (len_of_string_with_min_word < len_of_string && string[len_of_string_with_min_word] != ' ') {
			len_of_string_with_min_word++;
			len_of_min_word++;
		}
		len_of_string_with_min_word++;
		if (len_of_min_word < min_word) {
			min_word = len_of_min_word;
		}
	}
	return min_word;
}

int entrance(char* string)
{
	int len_of_string = 0;
	int min_word = 0;
	len_of_string = len_string(string);
	min_word = minimal_len_word(string, len_of_string);
	return min_word;
}

void output(char** string, int argc) {
	for (int i = 0; i < argc; i++) {
		printf("\t%s\n", string[i]);
	}
}

void free_memory(char** string, int argc) {
	for (int i = 0; i < argc; i++) {
		free(string[i]);
	}
	free(string);
}

void verify(int argc) {
	if (argc == 1) printf("\nYou havent rows to sort\n");
	return;
}