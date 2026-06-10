#include<stdio.h>
int reverse(int n, int rev);
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("\n the reverse of the number is:%d",reverse(a,0));
    return 0;
}
int reverse(int n, int rev){
         if(n==0){
            return rev;
         }
         return reverse(n/10,rev*10+n%10);
}
