#include<stdio.h>
int isPalindrome(int a);
int main(){
    int n1;
    printf("Enter the number:");
    scanf("%d",&n1);
    int r=isPalindrome(n1);
    return 0;
}
int isPalindrome(int a){
    int y=a;
    int sum=0;
    while(a!=0){
        int s= a%10;
        sum= (sum*10+s);
        a=a/10;

    }
    if(y==sum){
        printf("\nThe given number is a palindrome number");
    }
    else{
        printf("\n the given number is not a palindrome number");
    }
    return 0;

}