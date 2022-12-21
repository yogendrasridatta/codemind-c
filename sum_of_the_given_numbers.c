#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d
",a[i]+b[i]);
    }
    return 0;
}