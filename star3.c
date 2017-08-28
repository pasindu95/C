#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number :");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf(" ");
        }
        for (j=2*n; j>=2*i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i=1; i<=n; i++)
    {
        for (j=n; j>=i; j--)
        {
            printf(" ");
        }
        for (j=2; j<=2*i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
