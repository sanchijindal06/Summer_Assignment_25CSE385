#include<stdio.h>
int main(){
    int arr[]={1,2,3,3,4,5,6,7,8,9,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxFreq=arr[0];
    int maxElem=arr[0];
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++)
            if(arr[j]==arr[i])
            count++;
            if(count>maxFreq){
                maxFreq =count;
                maxElem= arr[i];

            }
        }
        printf("\nMaximum frequency element is %d and appears %d times",maxElem,maxFreq);
        return 0;
   
    }
