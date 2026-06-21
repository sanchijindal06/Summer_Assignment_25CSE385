#include<stdio.h>
void mergeArrays(int a[],int n,int b[],int m,int c[]){
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    for(int i=0;i<m;i++){
        c[n+i]=b[i];
    }
}
int main(){
    int a[]={1,3,5};
    int b[]={2,4,6,8};
    int n = sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int c[n+m];
    mergeArrays(a,n,b,m,c);
    printf("\n merged arrays:");
    for(int i=0;i<n+m;i++){
        printf("%d ",c[i]);
        printf("\n");
        
    }
    return 0;
}