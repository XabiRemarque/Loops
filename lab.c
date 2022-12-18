#include <stdio.h>
#include <stdlib.h>

// Funcs

void fill_arr(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = 1 + rand() % 100;
    }
}

void print_arr(int *array, int size)
{
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int sum(int *array, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

int mid(int *array, int size)
{
    printf("\n");
    int sum_i = sum(array, size);
    printf("Middle number: ");
    float mid = (float)sum_i / size;
    printf("%.1f ", mid);
    printf("\n");
    return mid;
}

int max_arr(int *array, int size)
{
    int max = array[0];
    printf("Max number: ");
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    printf("%d ", max);
    printf("\n");
    return max;
}

int min_arr(int *array, int size)
{
    int min = array[0];
    printf("Min number: ");
    for (int i = 0; i < size; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    printf("%d ", min);
    printf("\n");
    return min;
}

// Main

int main()
{
    // Loop 1

    printf("\nLoop 1\n");
    printf("\n");

    int N_1 = 3;

    int *arr1 = malloc(N_1 * sizeof(int));

    fill_arr(arr1, N_1);
    print_arr(arr1, N_1);
    int sum_print1 = sum(arr1, N_1);
    printf("Sum: %d", sum_print1);
    mid(arr1, N_1);
    max_arr(arr1, N_1);
    min_arr(arr1, N_1);

    // Loop 2

    printf("\nLoop 2\n");
    printf("\n");

    int N_2 = 5;

    int *arr2 = malloc(N_2 * sizeof(int));

    fill_arr(arr2, N_2);
    print_arr(arr2, N_2);
    int sum_print2 = sum(arr2, N_2);
    printf("Sum: %d", sum_print2);
    mid(arr2, N_2);
    max_arr(arr2, N_2);
    min_arr(arr2, N_2);

    // Loop 3

    printf("\nLoop 3\n");
    printf("\n");

    int N_3 = 7;

    int *arr3 = malloc(N_3 * sizeof(int));

    fill_arr(arr3, N_3);
    print_arr(arr3, N_3);
    int sum_print3 = sum(arr3, N_3);
    printf("Sum: %d", sum_print3);
    mid(arr3, N_3);
    max_arr(arr3, N_3);
    min_arr(arr3, N_3);

    // Loop Total

    printf("\nLoop Total\n");
    printf("\n");

    int len_total = N_1 + N_2 + N_3;
    int *arr_total = malloc(len_total * sizeof(int));

    int k = 0;

    for (int i = 0; i < N_1; i++)
    {
        arr_total[k++] = arr1[i];
    }
    for (int i = 0; i < N_2; i++)
    {
        arr_total[k++] = arr2[i];
    }
    for (int i = 0; i < N_3; i++)
    {
        arr_total[k++] = arr3[i];
    }

    fill_arr(arr_total, len_total);
    print_arr(arr_total, len_total);
    int sum_print_total = sum(arr_total, len_total);
    printf("Sum: %d", sum_print_total);
    mid(arr_total, len_total);
    max_arr(arr_total, len_total);
    min_arr(arr_total, len_total);

    free(arr1);
    free(arr2);
    free(arr3);
    free(arr_total);
}