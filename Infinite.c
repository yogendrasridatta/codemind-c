#include<stdio.h>
int main()
{
    int n,i;
    while(n!=-1)
    {
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        printf("%d
",n*n);
    }
}