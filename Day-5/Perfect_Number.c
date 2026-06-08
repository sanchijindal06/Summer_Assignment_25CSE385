#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(sum==n){
        printf("\n The given number is a perfect number");
    }
    else{
        printf("\n the given number is not a perfect number");
    }
    return 0;
}