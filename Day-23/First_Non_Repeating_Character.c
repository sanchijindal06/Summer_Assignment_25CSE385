#include<stdio.h>
int main(){
    char str[100];
    int i=0,j=0,count=0,found=0;
    printf("\n enter the string:");
    gets(str);
    while(str!='\0'){
        count = 0;
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count ==1){
            printf("\n first non repeating character is '%c':",str[i]);
            found=1;
            break;
        }
        i++;
    }
    if(found=0){
        printf("\n No non repeating character found");
    }
    return 0;
}  

   
