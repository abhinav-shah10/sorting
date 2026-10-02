#include <stdio.h>
int main()
{
    int a[20][20],s[20][3],r,c,i,j,nz=0,z=0,k=0;
    printf("enter the rows and columns of matrix\n");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the number:");
            scanf("%d",&a[i][j]);
            
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
            z++;
            }
            else
            {
            nz++;
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    if(nz>z)
    {
        printf("dense matrix\n");
    }
    else
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]!=0)
                {
                    s[k][0]=i;
                    s[k][1]=j;
                    s[k][2]=a[i][j];
                    k++;
                }
            }
        }
        printf("spARSE MATRIX\n");
        for(i=0;i<c;i++)
        {
            printf("%d\t%d\t%d\n",s[i][0],s[i][1],s[i][2]);
        }
    }
}