#include<stdio.h>
int main(){
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int maximum=a[0];
    int minimum=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>a[0]){
            maximum = a[i];
        }
        if(a[i]<a[0]){
            minimum = a[i];
        }

    }    
    printf("\nThe largest array element is %d",maximum);
    printf("\n The smallest array element is %d",minimum);
    return 0;
}