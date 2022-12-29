#include<stdio.h>
int main()
{
    int n,k,x,y,m;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int l=n-k;
    if(l*x<l*y)
    {
        m=k*x+l*x;
    }
    else
    {
       m= k*x+l*y;
    }
    printf("%d",m);
}