#include <stdio.h>
#include <time.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
void bubblesort(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int main()
{
    int a[100],i,n;
    clock_t start, end;
    double completion_time;
    printf("enetr the numebr of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("element afte bubble sort\n");
    start=clock();
    bubblesort(a,n);
    end=clock();
    completion_time = (double)(end - start) / CLOCKS_PER_SEC;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nCompletion time = %.10f seconds\n", completion_time);
    return 0;
}