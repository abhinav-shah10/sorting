#include <stdio.h>

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

void selection(int a[], int n)
{
    int i, j, min_idx;

    for(i = 0; i < n - 1; i++)
    {
        min_idx = i;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }

        swap(&a[min_idx], &a[i]);
    }
}

int main()
{
    int i, n, a[100];

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    selection(a, n);

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}