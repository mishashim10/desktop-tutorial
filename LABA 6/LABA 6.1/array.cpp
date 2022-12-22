#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <time.h>

int array_size_input(int n) {
    while (scanf_s("%d", &n) == 0, n < 1, getchar() != '\n') {
        printf("\nWrite a correct numbers\n");
        rewind(stdin);
    }
    return n;
}

int* memory(int n) {
    return (int*)malloc(n * sizeof(int));
}

void input_array(int* arr, int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = -100 + rand() % 201;
    }
}

void output_array(int* arr, int n) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%4d", arr[i]);
    }
    printf("\n");
}

void Hoara_sort(int* arr, int first, int last)
{
    int i = first, j = last;
    int tmp = 0, x = arr[(first + last) / 2];
    do {
        while (arr[i] < x)
            i++;
        while (arr[j] > x)
            j--;

        if (i <= j)
        {
            if (i < j)
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
            i++;
            j--;
        }
    } while (i <= j);
    if (i < last)
        Hoara_sort(arr, i, last);
    if (first < j)
        Hoara_sort(arr, first, j);
}

void bubble_sort(int* arr, int n)
{
    clock_t t1 = clock();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = (n - 1); j > i; j--) // для всех элементов после i-ого
        {
            if (arr[j - 1] > arr[j]) // если текущий элемент меньше предыдущего
            {
                int tmp = arr[j - 1]; // меняем их местами
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    clock_t t2 = clock() - t1;
    printf("\n%lf\n", (double)t2 / (double)CLOCKS_PER_SEC);
}