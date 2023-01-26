#include<stdio.h>
int main()
{
    int n,l,u,i;
    scanf("%d%d%d",&n,&l,&u);
    for(i=l;i<=u;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}