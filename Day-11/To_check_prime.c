#include<stdio.h>
int checkPrime(int a);
int main(){
    int n1;
    printf("enter the number to be checked:");
    scanf("%d",&n1);
    if(checkPrime(n1)){
        printf("\n The given number is prime number");
    }
    else{
        printf("\nThe given number is not a prime number");
    }
    return 0;

}
int checkPrime(int a){
    if(a<=1) return 0;
    if(a==2) return 1;
    if(a%2==0) return 0;
    for(int i=3;i*i<=a;i+=2){
        if(a%i==0)
        return 0;
    }
    return 1;
}