#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, c, s = 0;
    int *a;

    printf("Enter size: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        c = 0;
        if (a[i] <= 1)
            continue;

        for (j = 2; j <= a[i] / 2; j++)
        {
            if (a[i] % j == 0)
            {
                c = 1;
                break;
            }
        }

        if (c == 0)
            s = s + a[i];
    }

    printf("Sum = %d", s);

    free(a);

    return 0;
}