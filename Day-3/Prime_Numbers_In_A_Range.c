#include<stdio.h>
int main(){
    int start , end ,isPrime;
    printf("enter the start range:");
    scanf("%d",&start);
    printf("\n enter the end range:");
    scanf("%d",&end);
    printf("\n Prime numbers between %d-%d are:",start , end);
    for(int i = start;i<=end;i++){
        isPrime=1;
        if(i<=1){
            isPrime=0;
        }
        for(int j=2;j<i;j++){
              if(i%j==0){
                isPrime=0;
              }
        }
    
    if(isPrime==1){
        printf("%d",i);
    }

}
printf("\n");
return 0;
}