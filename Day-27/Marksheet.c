#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    int m1,m2,m3,m4;
    int total;
    float percentage;
};
int main(){
     struct Student s;
     printf("-----MARKSHEET GENERATION SYSTEM----");
     printf("\n enter roll number");
     scanf("%d",&s.roll);
     printf("\n enter the name of the student");
     scanf("%s",s.name);
     printf("\n enter marks of subjects:");
     scanf("%d%d%d%d",&s.m1,&s.m2,&s.m3,&s.m4);
     s.total=s.m1+s.m2+s.m3+s.m4;
     s.percentage=s.total/4.0;
     printf("\n ----MARKSHEET----");
     printf("\n Roll no %d",s.roll);
     printf("\n name: %s",s.name);
     printf("\nmarks in s1%d",s.m1);
     printf("\n marks in s2 %d",s.m2);
     printf("\n marks in s3 %d",s.m3);
     printf("\n marks in s4 %d",s.m4);
     printf("\n total %d",s.total);
     printf("\n percentage %d",s.percentage);
     return 0;
}