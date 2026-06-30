#include <stdio.h>
#include <string.h>

#define MAX 50

char name[MAX][50];
int roll[MAX];
int count = 0;

void addStudent()
{
    printf("Enter Roll No: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[count]);

    count++;
    printf("Student Added Successfully!\n");
}

void displayStudents()
{
    int i;

    if(count == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\nStudent Records:\n");
    for(i = 0; i < count; i++)
    {
        printf("Roll No: %d\tName: %s\n", roll[i], name[i]);
    }
}

void searchStudent()
{
    char sname[50];
    int i, found = 0;

    printf("Enter Name to Search: ");
    scanf(" %[^\n]", sname);

    for(i = 0; i < count; i++)
    {
        if(strcmp(name[i], sname) == 0)
        {
            printf("Student Found!\n");
            printf("Roll No: %d\n", roll[i]);
            printf("Name: %s\n", name[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found!\n");
}

void deleteStudent()
{
    char sname[50];
    int i, j, found = 0;

    printf("Enter Name to Delete: ");
    scanf(" %[^\n]", sname);

    for(i = 0; i < count; i++)
    {
        if(strcmp(name[i], sname) == 0)
        {
            for(j = i; j < count - 1; j++)
            {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
            }

            count--;
            found = 1;
            printf("Student Deleted Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Student Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n----- Student Management System -----\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}