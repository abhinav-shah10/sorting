#include <stdio.h>
int main()
{
    int m[2][2],i,j,psum=0,ssum=0;
    printf("enter the elements of \n");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                psum+=m[i][j];
            }
            if(i+j==2)
            {
                ssum+=m[i][j];
            }
        }
    }
    if(psum>ssum)
    printf("larger diagonal sum = %d",psum);
    else if(ssum>psum)
    printf("larger diagonal sum = %d",ssum);
    else
    printf("both are equal");
    return 0;
    
}