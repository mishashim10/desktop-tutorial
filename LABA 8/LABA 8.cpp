#include "Header.h"
int main(int argc, char** argv) {
	verify(argc);
	char** string = NULL;
	string = (char**)calloc(argc - 1, sizeof(char*));
	memory_alloc(string, argc, argv);
	copy(string, argc, argv);
	output(string, argc - 1);
	Hoara_sort(string, 0, (argc - 1 - 1));
	output(string, argc - 1);
	free(string);
}