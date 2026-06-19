#include<stdio.h>
void findPair(int arr[],int n,int target){
    int found =0;
    printf("\n pairs with sum %d",target);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf(" (%d,%d)\n",arr[i],arr[j]);
                found=1;
            }
        }
    }
}
int main(){
    int arr[]={2,7,4,5,1,3};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target = 9;
    findPair(arr,n,target);
    return 0;
}