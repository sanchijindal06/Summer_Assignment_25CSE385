#include<stdio.h>
int fib(int n);
int main(){
    int a,i;
    printf("enter the number of terms:");
    scanf("%d",&a);
   printf("\n the fibonacci series is:");
   for(i=0;i<=a;i++){
    printf("%d",fib(i));
   }
   printf("\n");
   return 0;
}
int fib(int n){
    if(n==0||n==1){
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
    }
    return fib(n-1)+fib(n-2);
}