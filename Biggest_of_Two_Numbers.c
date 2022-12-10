
    #include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("%d",b);
    }
    else if(a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("Equal");
    }
}
