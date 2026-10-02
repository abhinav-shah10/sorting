#include <stdio.h>
int main()
{
    int i,n,a[100],max,min,smax,smin;
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter the elemnts of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    smax=a[0];
    min=a[0];
    smin=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            smax=max;
            max=a[i];
        }
        else if(a[i]>max && a[i]!=max)
        {
            smax=a[i];
        }
        if(min>a[i])
        {
            smin=min;
            min=a[i];
        }
        else if(a[i]<min && a[i]!=min)
        {
            smin=a[i];
        
        }
    }
        printf("SECOND MAXIMUM = %d",smax);
        printf("SECOND MiniMUM = %d",smin);
        return 0;
}