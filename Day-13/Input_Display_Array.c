#include<stdio.h>
int main(){
    int n;
    printf("Enter array size:");
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
    return 0;
}