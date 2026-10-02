#include <stdio.h>
int main()
{
    int a[100],n,i,o,pos,v;
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("*****MENU******\n");
    printf("1. INSERT\n2.DELETE\n3.LINEAR SEARCH\n4.TRAVERSE\n5.EXIT\n");
    printf("Enter your option:");
    scanf("%d",&o);
    switch(o)
    {
        case 1:
        printf("enter the position where element is to be inserted\n");
        scanf("%d",&pos);
        printf("enter the element to be inserted \n");
        scanf("%d",&v);
        for (i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=v;
        printf("element inserted \n");
        break;
        case 2:
        printf("enter the element to be deleted\n");
        scanf("%d",&v);
        printf("enter the position from where it is to be deleted\n");
        scanf("%d",&pos);
        for (i=pos;i>=n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        break;
        case 3:
        printf("enter the element to be searched\n");
        scanf("%d",&v);
        for(i=0;i<n;i++)
        {
            if(a[i]==v)
            {
                pos=i;
            }
            break;
        }
        printf("element found at position= %d",pos);
        break;
        case 4:
        for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
        break;
    }
    return 0;
}
