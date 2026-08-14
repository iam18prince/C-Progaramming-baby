#include<stdio.h>
int main(){
       float R, S, A;
       printf("Enter Ram age:-");
       scanf("%f",&R);
       printf("Enter Shyam age:-");
       scanf("%f",&S);
       printf("Enter Ajay age:-");
       scanf("%f",&A);
       if(R<S&&R<A){
       printf("Ram is youngest");}
       if(S<R&&S<A){
       printf("Shyam is youngest");}
       if(A<R&&A<S){
       printf("Ajay is youngest");}
       return 0;
    }