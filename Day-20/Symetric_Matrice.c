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
    
    int t[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            t[i][j]=a[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(t[i][j]==a[i][j]){
                printf("\n symmetric matrice");
            }
            else{
                printf("\n non symmetric matrice");
            }
        }
    }
    return 0;
}