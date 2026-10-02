#include <stdio.h>
int main()
{
    int r,c,i,j,k=1,ctr=0;
    printf("enter the rows and column of matrix\n");
    scanf("%d %d",&r,&c);
    int m[r][c];
    printf("enter the elements of sparse matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
            if(m[i][j]!=0)
            ctr++;
        }
    }
    int t[ctr+1][3];
    t[0][0]=r;
    t[0][1]=c;
    t[0][2]=ctr;
    for(i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if(m[i][j]!=0)
            {
                t[k][0]=i;
                t[k][1]=j;
                t[k][2]=m[i][j];
                k++;
            }
        }
    }
    printf("given sparse matrix in triplet format\n");
    for(i=0;i<=ctr;i++)
    {
        printf("%d %d %d\n",t[i][0],t[i][1],t[i][2]);
    }
    return 0;
}