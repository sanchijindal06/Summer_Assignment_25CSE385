#include<stdio.h>
int main(){
    int a[10],n=0,ch,x,i;
    do{
        printf("\n1.Insert\n2.Display");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            scanf("%d",&a[n]);
            n++;
            break;
            case 2:
            for( i=0;i<n;i++){
                printf("%d",a[i]);
            }
            break;
            case 3:
            
            break;
        }
    }while(ch!=3);
    return 0;
}