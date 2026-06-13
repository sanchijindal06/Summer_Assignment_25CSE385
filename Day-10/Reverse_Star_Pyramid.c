#include<stdio.h>
int main(){
    int rows, i ,j,spaces;
    printf("enter the number of rows:");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--){
        for(spaces=0;spaces<rows-i;spaces++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}