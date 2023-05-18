#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d%d",&n,&r);
    for(i=1;i<=r;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}