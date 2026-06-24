#include<stdio.h>
int strlength(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
int main(){
    char str[100];
    printf("enter a string:");
    gets (str);
    printf("length of str is %d",strlength(str));
    return 0;

}