#include <stdio.h>

// Funcs

void print_arr(int array[], int size)
{
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void sum_and_mid(int array[], int size)
{
    int sum_1 = 0;
    printf("Sum: ");
    for (int i = 0; i < size; i++)
    {
        sum_1 += array[i];
    }
    printf("%d ", sum_1);
    printf("\n");

    float mid_1 = (float)sum_1 / size;
    printf("Middle number: ");
    printf("%.1f ", mid_1);
    printf("\n");
}

void max_arr(int array[], int size)
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
}

void min_arr(int array[], int size)
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
}

// Main

int main()
{
    // Loop 1

    printf("\nLoop 1\n");
    printf("\n");
    int N = 5;

    int arr1[N];
    for (int i = 0; i < N; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    print_arr(arr1, N);
    sum_and_mid(arr1, N);
    max_arr(arr1, N);
    min_arr(arr1, N);

    // Loop 2

    printf("\nLoop 2\n");
    printf("\n");
    int arr2[N];
    for (int i = 0; i < N; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    print_arr(arr2, N);
    sum_and_mid(arr2, N);
    max_arr(arr2, N);
    min_arr(arr2, N);

    // Loop 3

    printf("\nLoop 3\n");
    printf("\n");
    int arr3[N];
    for (int i = 0; i < N; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &arr3[i]);
    }

    print_arr(arr3, N);
    sum_and_mid(arr3, N);
    max_arr(arr3, N);
    min_arr(arr3, N);

    // Loop Total

    printf("\nLoop Total\n");
    printf("\n");

    int len_total = N + N + N;
    int arr_total[len_total];
    int k = 0;

    for (int i = 0; i < N; i++)
    {
        arr_total[k++] = arr1[i];
    }
    for (int i = 0; i < N; i++)
    {
        arr_total[k++] = arr2[i];
    }
    for (int i = 0; i < N; i++)
    {
        arr_total[k++] = arr3[i];
    }

    print_arr(arr_total, len_total);
    sum_and_mid(arr_total, len_total);
    max_arr(arr_total, len_total);
    min_arr(arr_total, len_total);
}