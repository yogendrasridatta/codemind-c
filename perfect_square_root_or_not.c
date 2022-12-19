#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,o;
    float x;
    scanf("%d",&n);
    m=sqrt(n);
    if(m*m==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}