#include<stdio.h>
int fib(int  r);
int main(){
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);
    int r= fib(n);
    return 0;
}
int fib(int r){
    int a=0,b=1,c;
    for(int i=1;i<=r;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}