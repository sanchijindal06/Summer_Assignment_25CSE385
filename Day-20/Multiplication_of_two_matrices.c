#include<stdio.h>
int main(){
    int m,n;
    printf("\n enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n];
    printf("\n enter first array's elements:");
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
    int c[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    printf("\n multiplication of two matrices:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("4%d ",c[i][j]);
        }
    }
    return 0;
}
