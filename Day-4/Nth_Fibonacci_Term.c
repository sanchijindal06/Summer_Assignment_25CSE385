#include<stdio.h>
int main(){
int n;
printf("enter the number of terms:");
scanf("%d",&n);
int a=0, b=1,c;
for(int i=1;i<n;i++){
    
    c=a+b;
    a=b;
    b=c;
}
printf("\n The %d fibonacci term is %d",n,a);
return 0;
}