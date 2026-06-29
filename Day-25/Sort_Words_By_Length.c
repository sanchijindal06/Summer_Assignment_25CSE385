#include<stdio.h>
#include<string.h>
int main(){
    char words[][50]={"banana","hi","apple","go","mango","a"};
    int n=sizeof(words)/sizeof(words[0]);
    char temp[50];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(strlen(words[i])>strlen(words[j])){
                strcpy(temp,words[i]);
                 strcpy(words[i],words[j]);
                 strcpy(words[j],temp);
            }
        
    printf("\n sorted by length");
    for(int i=0;i<n;i++){
        printf("\n%s (%zu)\n",words[i],strlen(words[i]));
    }
    return 0;
}
