#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n>=3)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("
");
        }
        for(i=1;i<=n-1;i++)
        {
            for(j=i;j<=n-1;j++)
            {
                printf("*");
            }
            printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
    }
    
}