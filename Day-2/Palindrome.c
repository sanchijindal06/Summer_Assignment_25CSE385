#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int m= n;
    int r=0;
    while(n!=0){
        int t=n%10;
         r=(r*10+t);
        n=n/10;
    }
    if(m==r){
        printf("\n The given number is palindrome");
    }
    else{
        printf("\n The given number is not a palindrome");
    }
    return 0;
}