#include <stdio.h>

int main()
{
    int N = 5;

    // Первый цикл
    printf("\n");
    printf("First loop\n");
    int arr_1[N];
    for (int i = 0; i < N; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &arr_1[i]);
    }
    printf("Array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr_1[i]);
    }
    printf("\n");

    int sum_1 = 0;
    printf("Sum: ");
    for (int i = 0; i < N; i++)
    {
        sum_1 += arr_1[i];
    }
    printf("%d ", sum_1);
    printf("\n");

    int mid_1 = sum_1 / N;
    printf("Middle number: ");
    printf("%d ", mid_1);
    printf("\n");

    int max_1 = arr_1[0];
    printf("Max number: ");
    for (int i = 0; i < N; i++)
    {
        if (arr_1[i] > max_1)
            max_1 = arr_1[i];
    }
    printf("%d ", max_1);
    printf("\n");

    int min_1 = arr_1[0];
    printf("Min number: ");
    for (int i = 0; i < N; i++)
    {
        if (arr_1[i] < min_1)
            min_1 = arr_1[i];
    }
    printf("%d ", min_1);
    printf("\n");

    // Второй цикл
    printf("\nSecond loop\n");
    int arr_2[N];
    for (int i = 0; i < N; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &arr_2[i]);
    }
    printf("Array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr_2[i]);
    }
    printf("\n");

    int sum_2 = 0;
    printf("Sum: ");
    for (int i = 0; i < N; i++)
    {
        sum_2 += arr_2[i];
    }
    printf("%d ", sum_2);
    printf("\n");

    int mid_2 = sum_2 / N;
    printf("Middle number: ");
    printf("%d ", mid_2);
    printf("\n");

    int max_2 = arr_2[0];
    printf("Max number: ");
    for (int i = 0; i < N; i++)
    {
        if (arr_2[i] > max_2)
            max_2 = arr_2[i];
    }
    printf("%d ", max_2);
    printf("\n");

    int min_2 = arr_2[0];
    printf("Min number: ");
    for (int i = 0; i < N; i++)
    {
        if (arr_2[i] < min_2)
            min_2 = arr_2[i];
    }
    printf("%d ", min_2);
    printf("\n");

    // Третий цикл

    printf("\nThird loop\n");
    int arr_3[N];
    for (int i = 0; i < N; i++)
    {
        printf("%d: ", i + 1);
        scanf("%d", &arr_3[i]);
    }
    printf("Array: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr_3[i]);
    }
    printf("\n");

    int sum_3 = 0;
    printf("Sum: ");
    for (int i = 0; i < N; i++)
    {
        sum_3 += arr_3[i];
    }
    printf("%d ", sum_3);
    printf("\n");

    int mid_3 = sum_3 / N;
    printf("Middle number: ");
    printf("%d ", mid_3);
    printf("\n");

    int max_3 = arr_3[0];
    printf("Max number: ");
    for (int i = 0; i < N; i++)
    {
        if (arr_3[i] > max_3)
            max_3 = arr_3[i];
    }
    printf("%d ", max_3);
    printf("\n");

    int min_3 = arr_3[0];
    printf("Min number: ");
    for (int i = 0; i < N; i++)
    {
        if (arr_3[i] < min_3)
            min_3 = arr_3[i];
    }
    printf("%d ", min_3);
    printf("\n");

    // Общий цикл
    printf("\nTotal loop");

    int len_total = N + N + N;
    int arr_total[len_total];
    int k = 0;

    for (int i = 0; i < N; i++)
    {
        arr_total[k++] = arr_1[i];
    }
    for (int i = 0; i < N; i++)
    {
        arr_total[k++] = arr_2[i];
    }
    for (int i = 0; i < N; i++)
    {
        arr_total[k++] = arr_3[i];
    }
    printf("\n");
    printf("Array: ");

    for (int i = 0; i < len_total; i++)
    {
        printf("%d ", arr_total[i]);
    }
    printf("\n");
    int sum_total = 0;
    printf("Sum: ");
    for (int i = 0; i < len_total; i++)
    {
        sum_total += arr_total[i];
    }
    printf("%d ", sum_total);
    printf("\n");

    int mid_total = sum_total / len_total;
    printf("Middle number: ");
    printf("%d ", mid_total);
    printf("\n");

    int max_total = arr_total[0];
    printf("Max number: ");
    for (int i = 0; i < len_total; i++)
    {
        if (arr_total[i] > max_total)
            max_total = arr_total[i];
    }
    printf("%d ", max_total);
    printf("\n");

    int min_total = arr_total[0];
    printf("Min number: ");
    for (int i = 0; i < len_total; i++)
    {
        if (arr_total[i] < min_total)
            min_total = arr_total[i];
    }
    printf("%d ", min_total);
    printf("\n");
}