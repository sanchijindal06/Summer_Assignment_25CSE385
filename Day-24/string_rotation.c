#include<stdio.h>
int main(){
    char str1[100], str2[100],temp[200];
    int i=0,j=0,len1=0,len2=0,flag=0,found=1;
    printf("enter the first string:");
    gets(str1);
    printf("\n enter second string:");
    gets(str2);
    while(str1[len1]!='\0') len1++;
    while(str2[len2]!='\0')len2++;
    if(len1!=len2){
        flag=0;
    }
    else{
        for(i=0;i<len1;i++){
            temp[1]=str1[i];
        }
        for(i=0;i<len1;i++)
        temp[len1+i]=str1[i];
        for(i=0;i<=len1;i++){
            found=1;
            for(j=0;j<len2;j++){
                if(temp[i+j]!=str2[j]){
                    found=0;
                    break;
                }
            }
            if(found==1){
                flag=1;

            }
        }
    }
    if(flag==1){
        printf("%s and %s are Rotations",str1,str2);
    }
    else{
        printf("%s and %s are not rotations",str1,str2);
    }
    return 0;
}