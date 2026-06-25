#include<stdio.h>
int main(){
    char str[100],result[100];
    int i=0,j=0;
    printf("\n enter a string:");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]!=' '){
            result[j]=str[i];
            j++;
        }
        i++;
    }
    result[j]='\0';
    printf("\n without spaces:%s",result);
    return 0;

}