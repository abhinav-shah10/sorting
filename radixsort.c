#include <stdio.h>
#include <time.h>
int maximum(int a[], int n)
{
    int max = a[0];
    int i;
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}
void counting(int a[], int n, int p)
{
    int O[100];
    int C[10] = {0};
    int i;

    for(i = 0; i < n; i++)
    {
        C[(a[i] / p) % 10]++;
    }
    for(i = 1; i < 10; i++)
    {
        C[i] = C[i] + C[i - 1];
    }
    for(i = n - 1; i >= 0; i--)
    {
        O[C[(a[i] / p) % 10] - 1] = a[i];
        C[(a[i] / p) % 10]--;
    }
    for(i = 0; i < n; i++)
    {
        a[i] = O[i];
    }
}
void radixsort(int a[], int n)
{
    int max;
    int p;
    max = maximum(a, n);
    for(p = 1; max / p > 0; p = p * 10)
    {
        counting(a, n, p);
    }
}
int main()
{
    int a[100], i, n;
    clock_t start, end;
    double completion_time;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    start = clock();
    radixsort(a, n);
    end=clock();
    completion_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("completion time = %.100f",completion_time);
    return 0;
}
