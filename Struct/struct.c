#include <stdio.h>
#include <stdlib.h>

// Funcs

struct int_array
{
    int *array;
    int size;
};

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

struct int_array arr_add(struct int_array loop_1, struct int_array loop_2)
{

    struct int_array loop_3;
    loop_3.size = 0;
    loop_3.array = malloc((loop_1.size + loop_2.size) * sizeof(int));

    for (int i = 0; i < loop_1.size; i++)
    {
        loop_3.array[loop_3.size++] = loop_1.array[i];
    }

    for (int i = 0; i < loop_2.size; i++)
    {
        loop_3.array[loop_3.size++] = loop_2.array[i];
    }

    return loop_3;
}

// Main

int main()
{
    // Loop 1

    printf("\nLoop 1\n");
    printf("\n");

    int N_1 = 3;

    int *arr1 = malloc(N_1 * sizeof(int));

    struct int_array lup1 = {arr1, N_1};

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

    struct int_array lup2 = {arr2, N_2};

    fill_arr(arr2, N_2);
    print_arr(arr2, N_2);
    int sum_print2 = sum(arr2, N_2);
    printf("Sum: %d", sum_print2);
    mid(arr2, N_2);
    max_arr(arr2, N_2);
    min_arr(arr2, N_2);

    // Loop Total

    printf("\nLoop Add\n");
    printf("\n");

    struct int_array tot_lup = arr_add(lup1, lup2);
    int N_tot = N_1 + N_2;

    printf("Array: ");
    for (int i = 0; i < N_tot; i++)
    {
        printf("%d ", tot_lup.array[i]);
    }
    int sum_print_total = sum(tot_lup.array, N_tot);
    printf("\nSum: %d", sum_print_total);
    mid(tot_lup.array, N_tot);
    max_arr(tot_lup.array, N_tot);
    min_arr(tot_lup.array, N_tot);

    free(arr1);
    free(arr2);
    free(tot_lup.array);
}
