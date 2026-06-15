#include<stdio.h>
int isPerfect(int a);
int main(){
    int n;
    printf("\n enter the number");
    scanf("%d",&n);
    int r= isPerfect(n);
    return 0;
}
int isPerfect(int a){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
        sum = sum+i;
        }
    }
    if(sum ==a){
        printf("\n The given number is a perfect number");

    }
    else{
        printf("\n the given number is not a perfect number");
    }
    return 0;

}