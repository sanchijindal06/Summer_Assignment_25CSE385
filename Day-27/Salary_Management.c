#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    int age;
    float salary;
} s;
int main(){
    struct Employee emp[100];

    
    while(1){
        printf("\n-----SALARY MANAGEMENT SYSTEM-----\n");
        
            
            printf("\n Enter employee id:");
            scanf("%d",&s.id);
            printf("\n Enter employee name:");
            scanf("%s",&s.name);
            printf("\n enter employee age:");
            scanf("%d",&s.age);
            printf("\n enter employee salary");
            scanf("%f",&s.salary);
            
            
            
                }
            
    return 0;
}