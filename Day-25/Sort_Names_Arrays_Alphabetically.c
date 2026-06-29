#include<stdio.h>
#include<string.h>
int main(){
char names[][50]={"ravi","amit","shreya","priya","karan"};
int n=sizeof(names)/sizeof(names[0]);
char temp[50];
for(int i=0;i<n;i++)
for(int j=i+1;j<n;j++)
if(strcmp(names[i],names[j])>0){
    strcpy(temp,names[i]);
    strcpy(names[i],names[j]);
    strcpy(names[j],temp);

}
printf("\nsorted names:");
for(int i=0;i<n;i++){
    printf("%d .%s\n",i+1,names[i]);
}
return 0;

}
