#include<stdio.h>
int main()
{
  int NUM1,NUM2,i,j,SUM1=0,SUM2=0;
  scanf("%d",&NUM1);
  scanf("%d",&NUM2);
  for(i=1;i<NUM1;i++)
  {
    if(NUM1%i==0)
    {
      SUM1=SUM1+i;
    }
  }
  for(j=1;j<NUM2;j++)
  {
    if(NUM2%j==0)
    {
      SUM2=SUM2+j;
    }
  }
  if(NUM1==SUM2 && NUM2==SUM1)
  {
    printf("Amicable");
  }
  else
  {
    printf("Not Amicable");
  }

}