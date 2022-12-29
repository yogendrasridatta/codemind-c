#include<stdio.h>
int main()
{
    int d,c,A1,A2,A3,B1,B2,B3,x,y,td,tc;
    scanf("%d%d",&d,&c);
    scanf("%d%d%d",&A1,&A2,&A3);
    scanf("%d%d%d",&B1,&B2,&B3);
    x=A1+A2+A3;
    y=B1+B2+B3;
    td=x+y+d+d;
    if(x>=150 && y>=150)
    {
        tc=x+y+c;
    }
    else if(x>=150 && y<150||x<150 && y>=150)
    {
        tc=x+y+d+c;
    }
    else 
    {
        tc=td;
    }
    if(tc<td)
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
}