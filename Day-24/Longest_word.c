#include<stdio.h>
int main(){
    char str[100],word[100],longest[100];
    int i=0,j=0,len=0,maxLen=0;
    printf("\n enter a sentence:");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]=' '){
            word[j]=str[i];
            j++;
        }
        if(str[i]==' '||str[i+1]=='\0'){
            word[j]='\0';
            len=j;
            if(len>maxLen){
                maxLen=len;
                int k=0;
                while(word[k]!='\0'){
                    longest[k]=word[k];
                    k++;
                }
                longest[k]='\0';
            }
            j=0;
        }
        i++;
    }
    printf("\n Longest word: %s(%d characters)",longest,maxLen);
    return 0;
}