#include<stdio.h>
int main(){
    int n;
    printf("enter the  number:");
    scanf("%d",&n);
    int isPrime=1;
    if(n<=1){
        isPrime=0;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                isPrime=0;
            }
        }

    }
    if(isPrime==1){
        printf("\n Prime Number");
    }
    else{
        printf("\nNot a prime number");
    }
    return 0;
}