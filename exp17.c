#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    int arr[100];
    int n, i;
    int *p;
    int sum = 0;
    float average;
    int newValue;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("\nEnter number of array elements: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    p = arr;

    printf("\nArray elements using pointers:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    printf("\n\nEnter new value for first array element: ");
    scanf("%d", &newValue);

    *p = newValue;

    printf("\nModified array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    sum = 0;

    for (i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }

    average = (float)sum / n;

    printf("\n\nSum = %d", sum);
    printf("\nAverage = %.2f\n", average);

    printf("\nMemory addresses and values:\n");

    for (i = 0; i < n; i++)
    {
        printf("\nElement %d:\n", i + 1);
        printf("Address = %p\n", (void *)(p + i));
        printf("Value = %d\n", *(p + i));
    }

    printf("\nAddress and value of variables:\n");

    printf("Address of a = %p\n", (void *)&a);
    printf("Value of a = %d\n", a);

    printf("Address of b = %p\n", (void *)&b);
    printf("Value of b = %d\n", b);

    return 0;
}