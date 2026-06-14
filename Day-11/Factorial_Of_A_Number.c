#include<stdio.h>
int fact(int a);
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("\n The factorial of the given number is : %d",fact(n));
    return 0;
}
int fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact = fact*i;
    }
    return fact;
}