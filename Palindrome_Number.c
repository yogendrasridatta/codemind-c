#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
    int r,n,rev=0;
    scanf("%d",&n);
    int x=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(x==rev)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
    return 0;
}