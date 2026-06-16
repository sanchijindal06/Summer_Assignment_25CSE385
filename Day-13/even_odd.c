#include<stdio.h>
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("\n enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int oddcount=0;
    int evencount=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            evencount= evencount+1;
        }
        else{
            oddcount = oddcount+1;
        }
    }
    printf("\n the number of even elements are:%d",evencount);
    printf("\n the number of odd elements are %d",oddcount);
    return 0;
}