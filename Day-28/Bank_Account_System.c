#include<stdio.h>
#include<string.h>
struct bank{
    int accNo;
    char name[50];
    float balance;
} b;
int main(){
    printf("\n Enter account number");
    scanf("%d",&b.accNo);
    printf("\n enter account holder name:");
    scanf("%s",&b.name);
    printf("\n enter initial balance:");
    scanf("%f",&b.balance);
    printf("\n ACCOUNT CREATED  SUCCESSFULLY");
    return 0;
}