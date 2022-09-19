#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	printf("Enter a, b, c: ");
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == -b || a == -c || b == -c)
		printf("yes");
	else
		printf("no");
}