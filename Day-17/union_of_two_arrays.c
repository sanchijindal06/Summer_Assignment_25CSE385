#include<stdio.h>
int findUnion(int a[],int n,int b[],int m,int c[]){
    int pos=0;
    for(int i=0;i<n;i++){
        c[pos++]=a[i];
    }
    for(int i=0;i<m;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                found =1;
                break;
            }
        }
            if(!found){
                c[pos++]=b[i];
            }

        
    }
    return pos;
}
int main(){
    int a[]={1,2,3,4,5};
    int b[]={3,4,5,6,7};
    int n=sizeof(b)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int c[n+m];
    int size = findUnion(a,n,b,m,c);
    printf("union:");
    for(int i=0;i<size;i++){
        printf("%d ",c[i]);
        printf("\n");
    }
    return 0;
}