#include<stdio.h>
int main(){
    char str[100];
    int i=0, words=0;
    printf("\n enter a sentence:");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]==' '&& str[i+1]!='\0'&& str[i+1]!=' '){
            words++;
        }
        i++;
    }
    if(str[0]!='\0'){
        words++;
    }
    printf("\n Number of words = %d",words);
    return 0;
}