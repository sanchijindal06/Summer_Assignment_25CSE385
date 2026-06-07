#include<stdio.h>
int main(){
    int start, end, n, t, digit, sum;
    printf("enter range");
    scanf("%d%d",&start,&end);
    printf("armstrong number are");
    for(n=start; n<=end;n++){
        t=n;
        sum=0;
    
    for(;t>0;t/=10){
        digit= t%10;
        sum+=digit*digit*digit;
    }
    if(sum==n){
        printf("\n%d",n);
    }
}
    return 0;
}