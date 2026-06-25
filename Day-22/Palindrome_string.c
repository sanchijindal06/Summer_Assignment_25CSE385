#include<stdio.h>
int main(){
    char str[100];
    int i=0, len=0,flag=1;
    printf("\n enter the string:");
    gets(str);
    while(str[len]!='\0'){
        len++;
    }
    int start = 0, end= len-1;
    while(start<end){
        if(str[start]!=str[end]){
            flag=0;
        }
    }
    start++;
    end--;
    if(flag==1){
        printf("\n the given string is palindrome");
    }
    else{
        printf("\n the given string is not a palindrome");
    }
    return 0;
}