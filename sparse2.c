#include <stdio.h>
int main()
{
    int sp1[20][3],sp2[20][3],sp3[40][3];
    int i,j,k;
    int r1,r2,r;
    printf("enter the rows in sparse matrix1 and 2\n");
    scanf("%d %d",&r1,&r2);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the element of sparse matrix 1\n");
            scanf("%d",&sp1[i][j]);
        }
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the element of sparse matrix 2\n");
            scanf("%d",&sp2[i][j]);
        }
    }
    for(i=0;i<r1||i<r2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(sp1[i][0]==sp2[i][0]&&sp1[j][1]==sp2[j][1])
            {
                sp3[i][j]=sp1[i][j]+sp2[i][j];
            }
            else if(sp1[i][0]<=sp2[j][0])
            {
                sp3[i][j]=sp1[i][j];
            }
            else if(sp1[0][i]>=sp2[0][j])
            {
                sp3[i][j]=sp2[i][j];
            }
        }
    }
printf("spARSE MATRIX\n");
        for(i=0;i<r;i++)
        {
            printf("%d\t%d\t%d\n",sp3[i][0],sp3[i][1],sp3[i][2]);
        }
}
