#include<stdio.h>
struct Employee{
    int id;
    char name[50];
    int age;
    float salary;
};
int main(){
    struct Employee emp[100];
    int n=0;
    int choice,i,id,found;
    while(1){
        printf("\n-----EMPLOYEE MANAGEMENT SYSTEM-----\n");
        printf("\n1. Add Employee");
        printf("\n2. Display Employee");
        printf("\n3. Delete Employee");
        printf("\n4. Exit");
        printf("\nenter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\n Enter employee id:");
            scanf("%d",&emp[n].id);
            printf("\n Enter employee name:");
            scanf("%s",&emp[n].name);
            printf("\n enter employee age:");
            scanf("%d",emp[n].age);
            printf("\n enter employee salary");
            scanf("%f",&emp[n].salary);
            n++;
            break;
            case 2:
            for(int i=0;i<n;i++){
                printf("%d\t%s\t\t%d\t%.2f\n",
                    emp[i].id,
                    emp[i].name,
                    emp[i].age,
                    emp[i].salary);

            }
            break;
            case 3:
            printf("\n Enter employee id to be deleted:");
            scanf("%d",&id);
            found=0;
            for(i=0;i<n;i++){
                if(emp[i].id==id){
                    int j;
                    for(j=i;j<n-1;j++){
                        emp[j]=emp[j+1];
                    }
                    n--;
                    found=1;
                    break;
                }
            }
            case 4:
            printf("\n Thank you!");
        }
    }
    return 0;
}