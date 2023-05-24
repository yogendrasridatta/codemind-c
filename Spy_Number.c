#include<stdio.h>
int main()
{
    int n,i,a=0,m=1;
    scanf("%d",&n);
    for(i=1;n>0;i++){
        i=n%10;
        n=n/10;
        a=a+i;
        m=m*i;
        
    }
    if(a==m){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}