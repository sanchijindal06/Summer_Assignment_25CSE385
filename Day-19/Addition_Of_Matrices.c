#include<stdio.h>
int main(){
    int m,n;
    printf("\n enter the number of rows and coloums:");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n],c[m][n];
    printf("\n enter the first array elements:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n enter second array elements:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\n the addition of two matrices:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",c[i][j]);
        }
    }
    return 0;
}
