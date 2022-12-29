#include<stdio.h>
int main()
{
    int n,m,s=0,r;
    scanf("%d",&n);
    while(n/10!=0)
    {
        s=0;
        while(n!=0)
        {
            m=n%10;
            s=s+m;
            n=n/10;
        }
        n=s;
    }
    printf("%d",s);
    
}