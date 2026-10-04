#include <stdio.h>
#include <time.h>
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
void heapify(int a[], int n, int i)
{
    int l=i;
    int left=2*i+1;
    int right=2*i+2;
    int temp;
    if (left<n&&a[left]>a[l])
        l=left;
    if (right < n && a[right] > a[l])
        l=right;
    if (l!=i)
    {
        temp=a[i];
        a[i]=a[l];
        a[l]=temp;
        heapify(a,n,l);
    }
}

void heapsort(int a[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    heapify(a,n,i);
    for(int i=n-1;i>=0;i--)
    {
        swap(&a[0],&a[i]);
        heapify(a,i,0);
    }
}
int main()
{
    int a[100],i,n;
    clock_t start,end;
    double completion_time;
    printf("enter the number of elements\n ");
    scanf("%d",&n);
    printf("enter the number of elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    start=clock();
    heapsort(a,n);
    end=clock();
    completion_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("element after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("completion time=%0.10f",completion_time);
    return 0;
}