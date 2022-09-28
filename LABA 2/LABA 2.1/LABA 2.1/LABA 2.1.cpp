#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	printf("Enter a: ");
	double a;
	double n = 0;
	scanf("%lf", &a);
	for (double i = 1;i <= 10000000;i++) {
		n += 1 / i;
		if (n > a) {
			printf("%.0lf", i);
			return 0;
		}
	}
	return 0;
}