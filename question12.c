#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    printf("enter the number of employes:");
    scanf("%d",&n);
    struct emp
    {
        int id;
        char name[100];
        char des[100];
        int bs;
        float hra;
        float da;
        float gs;
    }a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the information for employee %d",i+1);
        scanf("%d %[^\n] %[^\n] %d %f %f",&a[i].id,a[i].name,a[i].des,&a[i].bs,&a[i].hra,&a[i].da);
        a[i].gs=0;
    }
    for (i=0;i<n;i++)
    {
        a[i].gs+=(a[i].bs)+((a[i].hra*a[i].bs)/100)+((a[i].da*a[i].bs)/100);
        printf("NAME:%s",a[i].name);
        printf("DESIGNATION:%s",a[i].des);
        printf("BASIC SALARY:%d",a[i].bs);
        printf("HRA:%f  DA:%f",a[i].hra,a[i].da);
        printf("GROSS SALARY %f",a[i].gs);
    }

}