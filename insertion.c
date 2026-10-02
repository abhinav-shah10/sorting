#include <stdio.h>
void insertionsort(int a[],int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
int main()
{
    int a[100],i,n;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the nummber of elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}