#include<stdio.h>
int main(){
    int n;
    printf("enter the array size");
    scanf("%d",&n);
    int a[n];
    printf("\n enter the array element");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int duplicate;
    for(int i=0;i<n;i++){
        duplicate = a[i];
        for(int j=0;j<n;j++){
            if(a[j]==a[i]){
                duplicate=a[j];
            }
        }
    }
    printf("\n the duplicate element is %d", duplicate);
    return 0;
}