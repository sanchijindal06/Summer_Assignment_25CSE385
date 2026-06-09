#include<stdio.h>
int main(){
    int n,d=0,p=1;
    printf("enter the binary number:");
    scanf("%d",&n);
    while(n!=0){
        d= d+(n%10)*p;
        n= n/10;
        p= p*2;
    }
    printf("\n decimal number is: %d",d);
    return 0;
}