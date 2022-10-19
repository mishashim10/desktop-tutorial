#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
	int arr[100];
	printf("Enter n = ");
	int n;
	while (scanf("%d", &n) != 1 || getchar() != '\n' || n < 1 || n > 100) {
		printf("try again\n");
		rewind(stdin);
	}
	int ind1 = 0;
	int ind2 = 0;
	char mass[50];
	printf("If you want to enter data into the array, enter 'yes'\n");
	scanf("%s", &mass);
	for (int i = 0; i < n; i++) {
		if (strcmp("yes", mass) == 0) {
			printf("array number %d = ", i + 1);
			while (scanf("%d", &arr[i]) != 1) {
				printf("Wrong imput. Try again\n");
				printf("array number %d = ", i + 1);
				rewind(stdin);
			}

		}
		else {
			arr[i] = rand() %200-100;
			printf("%d Random number is : %d\n", i + 1, arr[i]);
		}
	}
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			ind1 = i;
		}
	}
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= min)
		{
			min = arr[i];
			ind2 = i;
		}
	}
	for (int k = 1; k <= ind2 - ind1 - 1; k++)
	{
		for (int i = ind1 + 2; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		n--;
	}
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}