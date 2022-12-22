#include"Header.h"
void main() {
	int choice = 0;
	int (*task)(void) = NULL;
	choice = select_function(choice);
	switch (choice) {
	case 1:
		task = exercise_1;
		task();
		break;
	case 2:
		task = exercise_2;
		task();
		break;
	case 3:
		task = end;
		task();
		break;
	}
}