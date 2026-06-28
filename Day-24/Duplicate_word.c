#include<stdio.h>
int main(){
 char str[200], words[20][100],result[200];
 int i=0,k=0,j=0,wordCount=0,isDuplicate=0;
 printf("\n enter a sentence:");
 gets(str);
 while(str[i]!='\0'){
    if(str[i]!=' '){
        words[wordCount][j]=str[i];
        j++;
    }
    if(str[i]==' '|| str[i+1]=='\0'){
        words[wordCount][j]='\0';
        wordCount++;
        j=0;
    }
    i++;
 }
 printf("\n without duplicate:");
 for(i=0;i<wordCount;i++){
    isDuplicate=0;
    for(j=0;j<i;j++){
        k=0;
        isDuplicate=1;
        while(words[i][k]!='\0'||words[j][k]!='\0'){
            if(words[i][k]!=words[j][k]){
                isDuplicate=0;
                break;
            }
            k++;
        }
        if(isDuplicate==1) break;
    }
}
        if(isDuplicate==0){
            printf("%s ",words[i]);
    
   
 }
 return 0;
}