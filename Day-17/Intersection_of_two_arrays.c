#include<stdio.h>
int findIntersection(int a[],int n,int b[],int m,int c[]){
    int pos=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                int dup=0;
            for(int k=0;k<pos;k++){
                if(c[k]==a[i]){
                    dup = 1;
                    break;
                }
            }
                if(!dup){
                    c[pos++]=a[i];
                    break;
               
            }
        }
        }
    
}
return pos;
}
int main(){
    int a[]={1,2,3,4,5};
    int b[]={3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    int c[n];
    int size=findIntersection(a,n,b,m,c);
    printf("intersection:");
    for(int i=0;i<size;i++){
        printf("%d ",c[i]);
        printf("\n");
    }
    return 0;
}