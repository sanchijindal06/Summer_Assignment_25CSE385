#include<stdio.h>
int main(){
    int n,i,largest=0;
    printf("enter the number:");
    scanf("%d",&n);
    for( i=1;i<n;i++){
        if(n%i==0){
            printf("\n%d",i);
            largest=i;
        }

    }
    printf("\nlargest prime factor is %d",largest);
    return 0;
}