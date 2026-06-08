#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int t=n;
    int sum=0;
    
    while(t!=0){
        int r = t%10;
        int fact =1 ;
        for(int i=1;i<=r;i++){
        fact = fact*i;
        }
        sum = sum+fact;
        t= t/10;
    }
    if(sum == n){
        printf("\n the given number is a strong number");
    }
    else{
        printf("\n the given number is not a strong number");
    }
    return 0;
}
