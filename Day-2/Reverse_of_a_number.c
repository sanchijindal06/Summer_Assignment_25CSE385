#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int rev=0;
    while(n!=0){
        int t=n%10;
        rev=(rev*10+t);
        n=n/10;
    }
    printf("\nreverse of a number is %d",rev);
    return 0;

}