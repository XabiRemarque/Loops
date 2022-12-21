#include <stdio.h>
#include <stdlib.h>

// Funcs

struct int_array
{
    int *array;
    int size;
};

void fill_arr(struct int_array loop)
{
    for (int i = 0; i < loop.size; i++)
    {
        loop.array[i] = 1 + rand() % 100;
    }
}

void print_arr(struct int_array loop)
{
    printf("Array: ");
    for (int i = 0; i < loop.size; i++)
    {
        printf("%d ", loop.array[i]);
    }
    printf("\n");
}

int sum(struct int_array loop)
{
    int sum = 0;
    for (int i = 0; i < loop.size; i++)
    {
        sum += loop.array[i];
    }
    return sum;
}

int mid(struct int_array loop)
{
    printf("\n");
    int sum_i = sum(loop);
    printf("Middle number: ");
    float mid = (float)sum_i / loop.size;
    printf("%.1f ", mid);
    printf("\n");
    return mid;
}

int max_arr(struct int_array loop)
{
    int max = loop.array[0];
    printf("Max number: ");
    for (int i = 0; i < loop.size; i++)
    {
        if (loop.array[i] > max)
            max = loop.array[i];
    }
    printf("%d ", max);
    printf("\n");
    return max;
}

int min_arr(struct int_array loop)
{
    int min = loop.array[0];
    printf("Min number: ");
    for (int i = 0; i < loop.size; i++)
    {
        if (loop.array[i] < min)
            min = loop.array[i];
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

    struct int_array loop_1 = {arr1, N_1};

    fill_arr(loop_1);
    print_arr(loop_1);
    int sum_print1 = sum(loop_1);
    printf("Sum: %d", sum_print1);
    mid(loop_1);
    max_arr(loop_1);
    min_arr(loop_1);

    // Loop 2

    printf("\nLoop 2\n");
    printf("\n");

    int N_2 = 5;

    int *arr2 = malloc(N_2 * sizeof(int));

    struct int_array loop_2 = {arr2, N_2};

    fill_arr(loop_2);
    print_arr(loop_2);
    int sum_print2 = sum(loop_2);
    printf("Sum: %d", sum_print2);
    mid(loop_2);
    max_arr(loop_2);
    min_arr(loop_2);

    // Loop Total

    printf("\nLoop Add\n");
    printf("\n");

    struct int_array loop_total = arr_add(loop_1, loop_2);

    printf("Array: ");
    for (int i = 0; i < loop_total.size; i++)
    {
        printf("%d ", loop_total.array[i]);
    }
    int sum_print_total = sum(loop_total);
    printf("\nSum: %d", sum_print_total);
    mid(loop_total);
    max_arr(loop_total);
    min_arr(loop_total);

    free(arr1);
    free(arr2);
    free(loop_total.array);
}
