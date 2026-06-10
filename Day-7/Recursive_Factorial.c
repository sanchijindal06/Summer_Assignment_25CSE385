#include<stdio.h>
int fact(int n);
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("\n the factorial of the number is %d:",fact(a));
    return 0;
}
int fact(int n){
    if(n==1||n==0){
        return 1;
    }
    else{
        return(n*fact(n-1));
    }
}