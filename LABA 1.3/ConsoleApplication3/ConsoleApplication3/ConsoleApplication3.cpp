#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	printf("Enter R, a: ");
	int R, a;
	scanf("%d %d", &R, &a);
	if (R > a / 2)
	printf("it is impossible to put a circle\n");
	else
		printf("it is possible to put a circle\n");
	if (R < a * sqrt(2) / 2)
		printf("impossible to fit a square\n");
	else
		printf("possible to fit a square\n");
}
