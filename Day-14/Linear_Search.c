#include<stdio.h>
int main(){
    int n,target,found =0,pos=-1;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nenter the element to be searched");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            found = 1;
            pos=i;
            break;
        }
    }
    if(found){
        printf("\nelement %d found at index %d",target,pos);
    }
    else{
        printf("\n element not found in the array");
        
    }
    return 0;
}