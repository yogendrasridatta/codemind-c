#include<stdio.h>
int main()
{
    int r,n,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        product=product*r;
    }
    printf("%d",product-sum);
}