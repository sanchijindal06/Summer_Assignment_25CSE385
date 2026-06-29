#include<stdio.h>
#include<string.h>
void commonChars(char s[][100],int n){
    int f[256]={0},t[256];
    for(int i=0;s[0][i];i++) f[(int)s[0][i]]++;
    for(int i=1;i<n;i++){
        memset(t,0,sizeof(t));
        for(int j=0;s[i][j];j++) t[(int)s[i][j]]++;
        for(int c=0;c<256;c++) if(f[c]>t[c]) f[c]=t[c];
    }
    printf("\n Common");
    int found=0;
    for(int c=0;c<256;c++)
    for(int k=0;k<f[c];k++){ printf("'%c'",c);found=1;}
    if(!found) printf("None");
    printf("\n");
}
int main(){
    char s[][100]={"bella","label","roller"};
    commonChars(s,3);
    return 0;
}
