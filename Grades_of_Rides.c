#include<stdio.h>
int main()
{
    int hf,s,sf;
    scanf("%d%d%d",&hf,&s,&sf);
    if(hf>50&&s>60&&sf>100)
    {
        printf("10");
    }
    else if(hf>50&&s>60)
    {
        printf("9");
    }
    else if(s>60&&sf>100)
    {
        printf("8");
    }
    else if(hf>50&&sf>100)
    {
        printf("7");
    }
    else if(hf>50||s>60||s>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}