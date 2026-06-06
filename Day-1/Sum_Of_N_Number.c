#include<stdio.h>
int main(){
    int n, s=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    printf("\nThe sum of n natural number is:%d",s);
    return 0;
}