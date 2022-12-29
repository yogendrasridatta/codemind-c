#include<stdio.h>
int main()
{
    int a,b,c,l,m,n; 
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
        l=a; 
        
    } 
    else if(b<a,b<c) 
    {
        l=b;
        }
        else
        {
            l=c; 
            
        }
        m=a+b+c-l;
        printf("%d",m);
    
}