#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
	int arr1[100];
	int arr2[100];
	int arr3[100];
	int n1,n2;
	int ind1 = 0;
	int ind2 = 0;
	int ind3 = 0;
	printf("Enter n1 = ");
	while (scanf("%d", &n1) != 1 || getchar() != '\n' || n1 < 1 || n1 > 100) {
		printf("try again\n");
		rewind(stdin);
	}
	char mass[50];
	printf("If you want to enter data into the array, enter 'yes'\n ");
	scanf("%s", &mass);
	for (int i = 0; i < n1; i++) {
		if (strcmp("yes", mass) == 0) {
			printf("array number %d = ", i + 1);
			while (scanf("%d", &arr1[i]) != 1) {
				printf("Wrong imput. Try again\n");
				printf("array number %d = ", i + 1);
				rewind(stdin);
			}

		}
		else {
			arr1[i] = rand() %200-100;
			printf("%d Random number is : %d\n", i + 1, arr1[i]);
		}
	}
	printf("Enter n2 = ");
	while (scanf("%d", &n2) != 1 || n2 < 1 || n2 > 100) {
		printf("try again\n");
		rewind(stdin);
	}
	printf("If you want to enter data into the array, enter 'yes'\n ");
	scanf("%s", &mass);
	for (int i = 0; i < n2; i++) {
		if (strcmp("yes", mass) == 0) {
			printf("array number %d = ", i + 1);
			while (scanf("%d", &arr2[i]) != 1) {
				printf("Wrong imput. Try again\n");
				printf("array number %d = ", i + 1);
				rewind(stdin);
			}

		}
		else {
			arr2[i] = rand() %200-100;
			printf("%d Random number is : %d\n", i + 1, arr2[i]);
		}
	}
	while (ind1 < n1 || ind2 < n2) {
		if (ind1 == n1) {
			arr3[ind3] = arr2[ind2];
			ind3++;
			ind2++;
		}
		else if (ind2 == n2) {
			arr3[ind3] = arr1[ind1];
			ind3++;
			ind1++;
		}
		else if (arr1[ind1] > arr2[ind2]) {
			arr3[ind3] = arr1[ind1];
			ind1++;
			ind3++;
		}
		else {
			arr3[ind3] = arr2[ind2];
			ind2++;
			ind3++;
		}
	}
	for (int i = 0; i < n1 + n2; i++) {
		printf("%d ", arr3[i]);
	}
	return 0;
}