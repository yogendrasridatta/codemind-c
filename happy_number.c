#include<stdio.h> 
#include<math.h> 
main() 
{ 
 int j,num,sum=0; 
 
 scanf("%d",&num); 
  while(sum!=1 && sum!=4) 
  { 
   sum=0;
   while(num>0) 
  { 
    j=num%10; 
    sum+=(j*j); 
    num=num/10;  
  } 
  num=sum; 
  } 
   
  if(sum==1) 
 printf("True"); 
 else 
 printf("False"); 
} 