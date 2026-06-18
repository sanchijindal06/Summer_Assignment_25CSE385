#include<stdio.h>
void rotateright(int arr[],int n){
    int temp =arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
        arr[0]=temp;
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/ sizeof(arr[0]);
    rotateright(arr,n);
    printf("\n after rotation");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}