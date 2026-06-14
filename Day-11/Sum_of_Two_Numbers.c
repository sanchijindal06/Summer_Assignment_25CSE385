#include<stdio.h>
int sum(int a,int b);
int main(){
    int n1,n2;
    printf("enter the first number:");
    scanf("%d",&n1);
    printf("\n enter the second number:");
    scanf("%d",&n2);
    printf("\nThe sum of two numbers is %d",sum(n1,n2));
    return 0;
}
int sum(int a,int b){
    int sum=a+b;
    return sum;
}  
