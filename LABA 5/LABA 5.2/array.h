int** memory(int sizeofrows, int sizeofcols);
void array_input_manually(int*** mas, int sizeofrows, int sizeofcols);
int array_size_input(int arrsize);
void print_array(int** arr, int sizeofrows, int sizeofcols);
int saddle_point(int*** arr, int sizeofrows, int sizeofcols);
void delete_saddle_point(int*** arr, int sizeofrows, int sizeofcols, int col_min_index);
void delete_memory(int** arr, int n);