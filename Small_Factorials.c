#include<stdio.h>
int main()
{
    int k,m;
    scanf("%d",&m);
    for(k=1;k<=m;k++)
    {
        int n,i,s=1;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            s=s*i;
        }
        printf("%d
",s);
    }
}