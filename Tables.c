#include<stdio.h>
int main()
{
    int N,R,i;
    scanf("%d%d",&N,&R);
    for(i=1;i<=R;i=i+2)
    {
        printf("%d x %d = %d
",N,i,N*i);
    }
}