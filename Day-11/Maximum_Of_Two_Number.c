#include<stdio.h>
int maximum(int a, int b);
int main(){
    int n1,n2;
    printf("enter the two numbers:");
    scanf("%d%d",&n1,&n2);
    int r=maximum(n1,n2);
    return 0;
}
int maximum(int a,int b){
    if(a>b){
        printf("\nA is greater");
    }
    else{
        printf("\nB is greater");
    }
    return 0;
}