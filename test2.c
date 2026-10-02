#include <stdio.h>
int main()
{
    int i,p,n;
    char s[100],s1[100],p[100];
    printf("enter your string:");

    for (i=0;i<n;i++)
    {
        scan("%c",s[i]);
        s[i]=s1[i];
    }
    int *top=s[0];
    for(i=0;i<n;i++)
    {
        if(top!=NULL)
        {
            p[i]=s[i];
        }
        top++;
    }
    for(i=0;i<n;i++)
    {
        if(s1[i]==p[i])
        {
            continue;  
        }
        else
        {
            return p=0;
            break;
        }
        return p=1;
    }
    if(p==0)
    {
        printf("not pallindrome");
    }
    else if(p==1)
    {
        printf("pallindrome");
    }
}