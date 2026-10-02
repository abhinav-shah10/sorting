#include <stdio.h>
int main()
{
    int a[10],max,min,i;
    printf("enter the 10 elements of an array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }

        printf("MAXIMUM =%d",max);
        printf("MINIMUM =%d",min);
    return 0;

}