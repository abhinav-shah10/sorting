#include <stdio.h>
int compare(int *a,int *b)
{
    if(*a>*b)
    {
        return *a;
    }
    else if(*b>*a)
    {
        return *b;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x,y,z;
    printf("enter the two numbers\n");
    scanf("%d %d",&x,&y);
    z=compare(&x,&y);
    if(z==0)
    {
        printf("both %d and %d are same ",x,y);
    }
    else if (z==x)
    {
        printf("%d is greater80 than %d",x,y);
    }
    else if(z==y)
    {
        printf("%d is smaller than %d",x,y);
    }return 0;
}