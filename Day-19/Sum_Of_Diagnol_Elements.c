#include<stdio.h>
int main(){
    int m,n;
    printf("\n enter the number of rows and coloums:");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n];
    printf("\n enter the first array elements:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
              sum = sum+a[i][j];
            }
        }
    }
    printf("\n sum of diagnol elements is:");
    printf("%d",sum);
    return 0;
}