#include<stdio.h>
int main(){
    int n,t,digit,sum;
    printf("enter the number to be checked:");
    scanf("%d",&n);
     t=n;
    for(; t>0;t/=10){
        digit = t%10;
        sum+= digit*digit*digit;
    }
     if(sum==n){
        printf("\narmstrong number");
     }
     else{
        printf("\nnot an armstrong number");
     }
     return 0;


    
}