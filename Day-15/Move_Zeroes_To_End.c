#include<stdio.h>
void zeroes(int arr[],int n){
    int temp[n],pos=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
        temp[pos++]=arr[i];
    }
    while(pos<n){
        temp[pos++]=0;
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int arr[]={0,1,0,3,12,0,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    zeroes(arr,n);
    printf("\n result");
    for(int i=0;i<n;i++){
        printf("arr[%d]=%d",i,arr[i]);
        printf("\n");
    }
    return 0;
}
