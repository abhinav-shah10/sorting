#include <stdio.h>
int main()
{
    int n,i,j,c=0;
    printf("enter the number of order matrix\n");
    scanf("%d",&n);
    int m[n][n];
    printf("enter the elmets of square matrix\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d ",&m[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(j>=i)
            {
                printf("%d ",m[i][j]);
            }
            else
            {
                printf("");
            }
           
        }
        printf("\n");
        
    }
    return 0;

}