#include<stdio.h>
int main(){
    int m,n;
    printf("\n enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("\n enter first array's elements:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
     scanf("%d",&a[i][j]);
}
    }
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<m;i++){
            sum+=a[i][j];
            printf("\n sum of column %d=%d",j+1,sum);
        }
    }
    return 0;
}