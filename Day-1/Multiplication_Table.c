#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int t=1;
    for(int i=1;i<10;i++){
        t= n*i;
        printf("\n%d * %d = %d",n,i,t);


    }
    return 0;
}