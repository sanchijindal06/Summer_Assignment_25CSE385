#include<stdio.h>
int removeDuplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;){
            if(arr[i]==arr[j]){
            for(int k=j;k<n-1;k++){
                arr[k]=arr[k+1];
                n--;
            }
        }
        else{
            j++;
        }
        }
    }
    return n;
}
int main(){
    int arr[]={1,2,3,4,1,5,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    n = removeDuplicate(arr,n);
    printf("\n after removing duplicates:");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
