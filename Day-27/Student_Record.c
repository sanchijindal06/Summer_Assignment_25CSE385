#include<stdio.h>
struct Student{
    int roll;
    char name[50];
    int marks;
};
int main(){
     struct Student s;
     
     printf("\n enter roll number");
     scanf("%d",&s.roll);
     printf("\n enter the name of the student");
     scanf("%s",s.name);
     printf("\n enter marks of subjects:");
     scanf("%d",s.marks);
     
     
     printf("\n Roll no %d",s.roll);
     printf("\n name: %s",s.name);
     printf("\nmarks in s1%d",s.marks);
     
     return 0;
}