#include <stdio.h>
void linearprob(int t[],int x)
{
    int inx,i,pos;
    inx=x%11;
    for (i=0;i<11;i++)
    {
        pos=(inx+i)%11;
        if(t[pos]==-1)
        {
            t[pos]=x;
            return;
        }
    }
    printf("linear table is full\n");
}
void quadprob(int t[],int x)
{
    int inx,i,pos;
    inx=x%11;
    for (i=0;i<11;i++)
    {
        pos=(inx+i*i)%11;
        if(t[pos]==-1)
        {
            t[pos]=x;
            return;
        }
    }
    printf("quad table is full\n");
}
int display(int t[])
{
    int i;
    for (i=0;i<11;i++)
    {
        printf("%d\t%d\n",i,t[i]);
    }
}
int main()
{
    int lt[11],qt[11];
    int i,n,x;
    for(i=0;i<11;i++)
    {
        lt[i]= -1;
        qt[i]= -1;

    }
    printf("enter the number of keys\n");
    scanf("%d",&n);
    printf("enter the keys\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        linearprob(lt,x);
        quadprob(qt,x);
    }
    printf("linear probing\n");
    display(lt);
    printf("quadratic probing\n");
    display(qt);
    return 0;
}