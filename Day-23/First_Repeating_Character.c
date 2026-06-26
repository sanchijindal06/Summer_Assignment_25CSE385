#include<stdio.h>
int main(){
    char str[100];
    int i=0,j=0,count=0,found=0;
    printf("\n enter the string:");
    gets(str);
    while(str[i]!='\0',j++){
        for(j=0;str[j]!=0;)
        if(str[i]==str[j]){
            count++;
        }
    }
    if(count>1){
        printf("\n First repeating character:'%c'",str[i]);
        found=1;
        
    }

    i++;
    if(found==0){
         printf("\n No repeating character found");
    }
    return 0;

}