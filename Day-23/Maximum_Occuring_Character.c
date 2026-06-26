#include<stdio.h>
int main(){
    char str[100];
    int i=0,j=0,count=0,maxCount=0;
    char maxChar, checked[100];
    int checkedCount=0,alreadyChecked=0;
    printf("\n enter a string:");
    gets(str);
    while(str[i]!='\0'){
        alreadyChecked=0;
        for(j=0;j<checkedCount;j++){
            if(str[i]==checked[j]){
                alreadyChecked=1;
            }
        }
        if(alreadyChecked==0){
            count = 0;
            for(j=0;str[j]!='\0';j++){
                if(str[i]==str[j]){
                    count++;
                }
            }
            if(count>maxCount){
                maxCount=count;
                maxChar=str[i];
            }
            checked[checkedCount]=str[i];
            checkedCount++;
        }
        i++;
    }
    printf("\n Maximum occuring character:'%c'=%d times",maxChar,maxCount);
    return 0;
}