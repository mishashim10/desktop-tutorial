#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	printf("Enter n: ");
	int n;
	int S = 0;
	int P = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) {
			S += i;
			P *= i;
		}
	}
	printf("Summa = %d\n", S);
	printf("Proizvedenie = %d", P);
	return 0;
}