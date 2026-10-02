#include <stdio.h>
int binary(int a[],int n,int x)
{
    int m,r;
    m=n/2;
    if(n<1)
    {
        return -1;
    }
    if(a[m]==x)
    {
        return m;
    }
    if(x<a[m])
    {
        return binary(a,m,x);
    }
    else
    {
        r=binary(a+m+1,n-m,x);
        if(r==-1)
        {
            return -1;
        }
        else
        {
           return m+1+r;
        }
    }
}
int main()
{
    int n,i,x,r;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);  
    }
    printf("enter the element to be searched:\n");
    scanf("%d",&x);
    r=binary(a,n,x);
    if(r==-1)
    {
        printf("element not found in the list");
    }
    else 
    {
        printf("element found at %d",r);
    }
}