#include<stdio.h>
int main(){
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("\n enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n the array elements are:");
    for(int i=0;i<n;i++){
        printf("\na[%d]=%d",i,a[i]);
    }
    int sum=0,avg;
    for(int i=0;i<n;i++){
        sum = sum+a[i];
    }
    printf("\n the sum of array elements is %d",sum);
    avg= sum/n;
    printf("\n the average of array elements is %d",avg);
    return 0;
}