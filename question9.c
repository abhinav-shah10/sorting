#include <stdio.h>
int main()
{
    int a[100],b[100],i,x,y;
    printf("enter the numebr of elemnts in first array and second array:\n");
    scanf("%d %d",&x,&y);
    printf("enter the elments of first array \n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elemets of second array\n");
    for (i=0;i<y;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<y;i++)
    {
        a[x+i]=b[i];

    }
    x+=y;
    printf("merged array\n");
    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    

}