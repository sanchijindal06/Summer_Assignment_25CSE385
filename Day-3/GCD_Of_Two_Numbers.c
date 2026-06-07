#include<stdio.h>
int main(){
    int n1,n2,gcd;
    printf("enter the first number:");
    scanf("%d",&n1);
    printf("\n enter the second number");
    scanf("%d",&n2);
    if(n1<0){
        n1=-n1;
    }
    if(n2<0){
        n2=-n2;
    }
    if(n1==0){
        gcd=n2;
    }
    else if(n2==0){
        gcd=n1;
    }

    
    else{
        for(int i=1;i<=n1&&i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
    }
    printf("\n gcd of %d and %d is %d",n1 , n2,gcd);
    return 0;

}