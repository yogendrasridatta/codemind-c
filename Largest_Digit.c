#include<stdio.h>
main() 
{

   int num, r, ld = 0;
   scanf("%d", &num);

   while (num > 0) 
   {
       r = num % 10;
       if (ld < r) {
           ld = r;
       }
       num = num / 10;
   }
   printf("%d", ld);
}