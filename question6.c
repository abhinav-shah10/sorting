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
    printf("enter the position where element is to deleted\n");
    scanf("%d",&pos);
    printf("enter the element to be deleted");
    scanf("%d",&n);
    for (i=pos;i>=b-1;i++)
    {
        a[i]=a[i+1];
    }
    b--;
     printf("array after deletion \n");
    for(i=0;i<b;i++)
    {
        printf("%d",a[i]);
    }
    return 0;

}