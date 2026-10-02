#include <stdio.h>
int main()
{
    int i,n,b,a[100];
    printf("enter the number of elemnts\n");
    scanf("%d",&b);
    printf("enter the elements of array\n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be entered");
    scanf("%d",&n);
    for (i=b;i>=1;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=n;
    printf("array after insertion\n");
    for(i=0;i<b;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}