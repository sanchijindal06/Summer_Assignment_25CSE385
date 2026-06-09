#include<stdio.h>
int main(){
    int n, b =0,p=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0){
        b = b +(n%2)*p;
        n=n/2;
        p = p*10;
    }
    printf("binary : %d",b);
    return 0;
}