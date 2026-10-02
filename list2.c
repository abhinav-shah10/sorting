#include <stdio.h>
int main()
{
    int a[20][3],b[20][3],c[40][3];
    int i,j,k=1;
    int r1,r2,c1,c2,t1,t2;
    printf("enter the sparse matrix in 3 tuple format\n");
    scanf("%d %d %d",&r1,&c1,&t1);
    a[0][0]=r1;
    a[0][1]=c1;
    a[0][2]=t1;
    for (i=1;i<=t1;i++)
    {
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);

    }
    printf("enter the sparse matrix in 3 tuple format\n");
    scanf("%d %d %d",&r2,&c2,&t2);
    b[0][0]=r2;
    b[0][1]=c2;
    b[0][2]=t2;
    for (i=1;i<=t2;i++)
    {
        scanf("%d %d %d",&b[i][0],&b[i][1],&b[i][2]);
    }

    if(r1!=r2||c1!=c2)
    {
        printf("addition not possible\n");
        return 0;
    }
    c[0][0]=r1;
    c[0][1]=c1;
    i=1;
    j=1;
    while(i<=t1&&j<=t2)
    {
        if(a[i][0]==b[j][0]&&a[i][1]==b[j][1])
        {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2]+b[j][2];
            if(c[k][2]!=0)
                k++;
            i++;
            j++;
        }
        else if(a[i][0]<b[j][0]||(a[i][0]==b[j][0]&&a[i][1]<b[j][1]))
        {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2];
            k++;
            i++;
        }
        else
        {
            c[k][0]=a[i][0];
            c[k][1]=a[i][1];
            c[k][2]=a[i][2];
            k++;
            j++;
        }
    }
    while (i<=t1)
    {
        c[k][0]=a[i][0];
        c[k][1]=a[i][1];
        c[k][2]=a[i][2];
        k++;
        i++;
    }
    while (j<=t2)
    {
        c[k][0]=b[i][0];
        c[k][1]=b[i][1];
        c[k][2]=b[i][2];
        k++;
        j++;
    }
    c[0][2]=k-1;
    printf("result sparse matrix in 3 tuple format\n");
    for (i=0;i<k;i++)
    {
        printf("%d %d %d\n",c[i][0],c[i][1],c[i][2]);
    }
    return 0;
}