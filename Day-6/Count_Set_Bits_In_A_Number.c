#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0){
        count = count+(n&1);
        n=n>>1;

    }
    printf("\nset bits: %d",count);
    return 0;
}