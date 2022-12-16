#include<stdio.h>
int main()
{
    int n,i,j,count=0,tc=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        int count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
            if(count==9)
            {
                printf("%d ",i);
                tc++;
            }
        
        //printf("
Total=%d",tc);
    }
    printf("
Total=%d",tc);
}