#include<stdio.h>
int main(){
       int a;
       printf("Enter your number:-");
       scanf("%d",&a);
       if(a%15==0){
       printf("Divisible by 3 and 5 ");}
       else {
       printf("Not divisible by 3 and 5");}
       return 0;
    }