#include<stdio.h>
int main()
{
    int n,i,r,sum=0,product=1;
    scanf("%d",&n);
    i=n;
    while(0<i)
    {
        r=i%10;
        i=i/10;
        sum=sum+r;
        product=product*r;
    }
    printf("%d",((product)-(sum)));
}