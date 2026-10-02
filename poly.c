#include <stdio.h>
#include <stdio.h>
void addPolynomial(int p1[], int p2[], int result[], int n)
 {
    int i;
    for(i = 0; i <= n; i++)
    result[i] = p1[i] + p2[i];
}
int main()
{
    int p1[20], p2[20], result[20];
    int n, i;
    printf("Enter maximum degree of x: ");
    scanf("%d", &n);
    printf("Enter Polynomial-1 from lowest degree to highest degree:\n");
    for(i = 0; i <= n; i++)
    {
        scanf("%d", &p1[i]);
    }
    printf("Enter Polynomial-2 from lowest degree to highest degree:\n");
    for(i = 0; i <= n; i++)
        scanf("%d", &p2[i]);
    addPolynomial(p1, p2, result, n);
    printf("Resultant Polynomial: ");
    for(i = n; i >= 0; i--)
    {
        if(result[i] != 0)
        {
        printf("%dx^%d", result[i], i);
        if(i != 0)
        printf("+");
        }
    } 
    return 0;
}