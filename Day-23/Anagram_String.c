#include<stdio.h>
int main(){
    char str[100],str2[100];
    int i=0,j=0,len1=0,len2=0,found=0,flag=1;
    int checked[100]={0};
    printf("\n enter first string");
    gets(str);
    printf("\n enter second string:");
    gets(str2);
    while(str[len1]!='\0') len1++;
    while(str2[len2]!='\0') len2++;
    if(len1!=len2){
        flag=0;
    }
    else{
        for(i=0;i<len1;i++){
            found=0;
            for(j=0;j<len2;j++){
                if(str[i]==str2[j]&&checked[j]==0){
                    checked[j]=1;
                    found=1;
                }
            }
            if(found==0){
                flag=0;
            }
        }
    }
    if(flag==1){
        printf("\nthe strings are anagram");
    }
    else{
        printf("\n the strings are not anagrams");
    }
    return 0;

}