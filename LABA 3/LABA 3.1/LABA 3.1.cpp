#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
	double arr[100];
	int n;
	printf("Enter n = ");
	double S1 = 0;
	double S2 = 0;
	int found = 0;
	while (scanf("%d", &n)!=1 || getchar()!='\n' || n < 1 || n > 100) {
		printf("try again\n");
		rewind(stdin);
	}
	char mass[50];
	printf("If you want to enter data into the array, enter 'yes'\n ");
	scanf("%s", &mass);
	for (int i = 0; i < n; i++) {
		if (strcmp("yes", mass) == 0) {
			printf("array number %d = ", i + 1);
			while (scanf("%lf", &arr[i]) != 1) {
				printf("Wrong imput. Try again\n");
				printf("array number %d = ", i + 1);
				rewind(stdin);
			}

		}
		else {
			arr[i] = rand() % 200-100;
			printf("%d Random number is : %lf\n", i + 1, arr[i]);
		}
	}
		for (int i = 0; i < n; i++) {
			if (i % 2 == 1) {
				S1 += arr[i];
			}
		}
		printf("Summa1 = %lf\n", S1);
		for (int i = 0; i < n; i++) {
			if (arr[i] < 0 && found)
				break;
			if (arr[i] < 0)
				found = 1;
			else if (found)
				S2 += arr[i];
		}
		printf("Summa2 = %lf\n", S2);
}