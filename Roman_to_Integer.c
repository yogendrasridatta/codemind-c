#include<stdio.h>
#include<string.h>
int dig(char);
int main(){
 
    char roman[1000];
    int i=0;
    long int n =0;
 

    scanf("%s",roman);
 
    while(roman[i]){
 
         if(dig(roman[i]) < 0){
             printf("%c",roman[i]);
             return 0;
         }
 
         if((strlen(roman) -i) > 2){
             if(dig(roman[i]) < dig(roman[i+2])){
                 printf("Invalid roman number");
                 return 0;
             }
         }
 
         if(dig(roman[i]) >= dig(roman[i+1]))
             n = n + dig(roman[i]);
         else{
             n = n + (dig(roman[i+1]) - dig(roman[i]));
             i++;
         }
         i++;
    }
 
    printf("%ld",n);
 
}
 
int dig(char c){
 
    int value=0;
 
    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case NULL: value = 0; break;
         default: value = -1; 
    }
 
    return value;
}