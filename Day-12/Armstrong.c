#include<stdio.h>
int isArmstrong(int a);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int r= isArmstrong(n);
    return 0;
}
int isArmstrong(int a){
    int sum=0;
    int t=a;
    for(;t>0;t/=10){
        int digit = t%10;
         sum+= digit*digit*digit;
    }
    if(sum==a){
        printf("\nArmstrong number");

    }
    else{
        printf("\n not an armstrong");
    }
    return 0;
}