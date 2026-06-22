#include<stdio.h>
int main(){
    int m,n;
    printf("\n enter the number of rows and coloums:");
    scanf("%d%d",&m,&n);
    int a[m][n],b[n][m];
    printf("\n enter the first array elements:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("\n transpose of a matrice is:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",b[i][j]);
        }
    }
    return 0;
}
    