#include<stdio.h>
int main(){
    char str[100],result[100];
    int i=0,j=0,count=0,k=0;
    printf("\n enter a string:");
    gets(str);
    while(str[i]!='\0'){
        count=1;
        i++;
        while(str[i]==str[i+1]){
            count++;
            i++;
        }
    
    result[j]=str[i];
    j++;
    if(count>1){
        if(count>=100){
            result[j]='0'+count/100;
            j++;
            result[j]='0'+(count%100)/10;
            j++;
            result[j]='0'+count%10;
            j++;
        }
        else if(count>=10){
            result[j]='0'+count/10;
            j++;
            result[j]='0'+count%10;
            j++;
        }
        else{
            result[j]='0'+count;
            j++;
        }
    }
    i++;
}
result[j]!='\0';
while(str[k]!='\0')k++;
if(j<k){
    printf("compressed string: %s",result);
}
else{
    printf("\n compression not benificial,original :%s",str);
}
return 0;
}