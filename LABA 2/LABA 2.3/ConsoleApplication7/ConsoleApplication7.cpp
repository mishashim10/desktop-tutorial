#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	printf("Enter X, N: ");
	double X;
	int N;
	scanf("%lf %d", &X, &N);
	int s = 0;
	for (int i = 1; i <= N; i += 2) {
		int F = 1;
		for (int j = 1; j <= 2 * i + 1; j++)
			F *= j;
		s += (double)(pow((-1), i) * pow(X, 2 * i + 1)) / (double)F;
	}
	printf("%d", s);
	return 0;
}