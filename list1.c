#include <stdio.h>
int main()
{
    int s[10][3],t[10][3];
    int i,j,r,c,v,k=1;
    printf("entr the sparse matrix in 3 tuple format:\n");
    for (i=0;i<3;i++)
    {
        scanf("%d %d %d",&s[i][0],&s[i][1],&s[i][2]);

    }
    r=s[0][0];
    c=s[0][1];
    v=s[0][2];
    t[0][0]=c;
    t[0][1]=r;
    t[0][2]=v;
    for (i=0;i<c;i++)
    {
        for (j=1;j<=v;j++)
        {
            if(s[j][1]==i)
            {
                t[k][0]=s[j][1];
                t[k][1]=s[j][0];
                t[k][2]=s[j][2];
                k++;
            }

        }
    }
    printf("R\tC\tELEMENT\n");
    for (i=0;i<=v;i++)
    {
        printf("%d\t%d\t%d\n",t[i][0],t[i][1],t[i][2]);
    }
    return 0;
}