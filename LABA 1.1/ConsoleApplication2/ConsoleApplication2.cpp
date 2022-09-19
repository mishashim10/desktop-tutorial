#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main() {
	printf("Enter b, q, n: ");
	double b, q, n;
	scanf("%lf %lf %lf", &b, &q, &n);
	if (q == 1)
		printf("%lf", b * n);
	else
	printf("%lf",(b * (1 - pow(q, n))) / (1 - q));
}