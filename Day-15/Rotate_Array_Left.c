#include<stdio.h>
void rotateleft(int arr[],int n){
    int temp= arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
        arr[n-1]=temp;
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotateleft(arr,n);
    printf("\nafter rotation");
    for(int i=0;i<n;i++){
        printf("arr[%d]=%d",i,arr[i]);
        printf("\n");
    }
    return 0;

}
