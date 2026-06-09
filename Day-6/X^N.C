#include<stdio.h>
int main(){
    int b , e,result=1;
    printf("enter the base");
    scanf("%d",&b);
    printf("\n enter the exponent:");
    scanf("%d",&e);
    for(int i=1;i<=e;i++){
         result = result*b;
    }
    printf("\nb^e is %d",result);
    return 0;
}