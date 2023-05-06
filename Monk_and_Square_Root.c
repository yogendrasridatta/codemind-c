#include<stdio.h>
#include<math.h>
int main()
{
    long long int k,l;
    scanf("%lli",&l);
    for(k=1;k<=l;k++)
    {
        long long int n,m,i,x,c=0;
        scanf("%lli %lli",&n,&m);
        for(i=0;i<m;i++)
        {
          if(i*i%m==n) {
              x=i;
              c++;
              break;
          }  
        }
        if(c!=0)
        {
            printf("%lli
",x);
        }
        if(c==0)
        {
            printf("-1
");
        }
    }
}