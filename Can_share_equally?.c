#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a!=0&&a%2==0)
    {
        printf("YES");
    }
    else if(a==0&&b%2==0){
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}