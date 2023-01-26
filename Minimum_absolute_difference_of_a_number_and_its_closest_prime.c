#include<stdio.h>
int main()
{
    int n,i,j,k,np,sp,c=0,d,e;
    scanf("%d",&n);
    for(j=n;j>=n-10;j--)
    {
        c=0;
        for(k=1;k<=j;k++)
        {
            if(j%k==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            np=j;
            d=n-np;
            break;
        }
    }
    for(j=n;j<=n+10;j++)
    {
        c=0;
        for(k=1;k<=j;k++)
        {
            if(j%k==0)
            {
                c++;
                
            }
        }
        if(c==2)
        {
            sp=j;
            e=sp-n;
            break;
            
        }
    }
    if(d<e || d==e)
    {
        printf("%d",d);
    }
    else
    {
        printf("%d",e);
    }
}