#include<stdio.h>
int main(){
    int n,target,count =0;
    printf("enter the array size:");
    scanf("%d",&n);
    int arr[n];
    printf("\n enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nenter the element whose frequency is to be checked: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    if(count>0){
        printf("\n %d occurs %d times in the array",target,count);
    }
    else{
        printf("\n element not found!");
    }
    return 0;
}