#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int ch;
    do{
        printf("\n1.Input String\n2.Display String\n3.Length\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            scanf("%s",str);
             break;
             case 2:
             printf("%s",str);
             break;
             case 3:
             printf("\n length = %d",strlen(str));
             break;
             case 4:
             break;
        }
    }while(ch!=4);
    return 0;
}