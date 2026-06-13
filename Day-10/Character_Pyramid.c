#include<stdio.h>
int main(){
    int rows;
    printf("enter number of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int s=i;s<rows;s++){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
    return 0;
}