#include<stdio.h>
int main(){
    char str[100];
    int i=0,j=0,count=0;
    char checked[100];
    int checkedCount=0;
    int alreadyPrinted=0;
    printf("\n enter a string");
    gets(str);
    while(str[i]!='\0'){
        count=1;
        alreadyPrinted=0;
         for(j=0;j<checkedCount;j++){
            if(str[i]==checked[j]){
            alreadyPrinted=1;
            break;
         }
        }
    
    if(alreadyPrinted==0){
        for(j=i+1;str[j]!='\0';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        printf("\n'%c'=%d",str[i],count);
        checked[checkedCount]==str[i];
        checkedCount++;
    }
    i++;
}
return 0;
}
   