#include<stdio.h>
int main(){
     char str[100];
    int i,len=0;
    printf("enter a string:");
    gets(str);
    while(str[len]!='\0'){
        len++;
    }
    int start=0,end=len-1;
    char temp;
    while(start<end){
        temp = str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("\n reversed string is %s",str);
    return 0;
}
