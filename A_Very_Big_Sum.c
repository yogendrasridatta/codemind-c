#include<stdio.h>
int main()
{
    long int n,i;
    scanf("%ld",&n);
    long int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%ld",sum);
}