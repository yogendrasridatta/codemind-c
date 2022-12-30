#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,m,p;
    scanf("%d%d%d",&x,&y,&m);
    z=pow(x,y);
    p=z%m;
    printf("%d",p);
}