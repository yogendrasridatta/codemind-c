#include<stdio.h>
int main()
{
    int b,n,k,m,r;
    scanf("%d%d%d",&n,&m,&k);
    b=(k*m);
    r=n/b;
    if(n%b==0)
    {
    printf("%d",r);
    }
    else
    {
    printf("%d",r+1);
    }
    
}