#include<stdio.h>
int main(){
       int a;
       printf("Enter your number:-");
       scanf("%d",&a);
       if((a%3==0 || a%5==0)&&a%15!=0){
       printf("Divisible by 3 or5 but not divisible by 15");}
       else {
       printf("This number is not matching the required condition");}
       return 0;
    }