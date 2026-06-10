#include<stdio.h>
int sum(int n);
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("\n the sum of digits is :%d",sum(a));
    return 0;

}
int sum(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sum(n/10);
}