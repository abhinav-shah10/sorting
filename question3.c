#include <stdio.h>
int main()
{
    int i,n,b,pos,a[100];
    printf("enter the number of elemnts\n");
    scanf("%d",&b);
    printf("enter the elements of array\n");
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position where element is to entered\n");
    scanf("%d",&pos);
    printf("enter the element to be entered");
    scanf("%d",&n);
    for (i=b;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=n;
    printf("array after insertion\n");
    for(i=0;i<b+1;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}