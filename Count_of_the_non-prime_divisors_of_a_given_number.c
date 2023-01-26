#include<stdio.h>
int main()
{
    int n,i,tc=0,c=1,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        tc=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    tc=tc+1;
                    if(tc>2)
                    {
                        c=c+1;
                        break;
                    }
                }
            }
        }
    }
    printf("%d",c);
}