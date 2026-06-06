#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int product=1;
    while(n!=0){
        int t=n%10;
        product = product *t;
        n=n/10;
    }
    printf("\nproduct of a number is %d",product);
    return 0;

}