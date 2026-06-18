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
    for(int i=0;i<n;i++){
        printf("\na[%d]=%d",i,a[i]);
    }
    int r[n];
    for(int i=0;i<n;i++){
        r[i]=a[n-1-i];
    }
    printf("\n reversed array is:");
    for(int i=0;i<n;i++){
        printf("\nr[%d]=%d",i,r[i]);
    }
    return 0;
}