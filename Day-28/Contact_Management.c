#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct contact {
    char name[50];
    char contact[15];
    char email[50];
};

int main() {
    struct contact c[MAX_CONTACTS];
    int n = 0, choice, i, found;
    char search[50];

    do {
        printf("\n---CONTACT MANAGEMENT SYSTEM---");
        printf("\n 1. Add contact");
        printf("\n 2. Search contact");
        printf("\n 3. Delete contact");
        printf("\n 4. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                if (n >= MAX_CONTACTS) {
                    printf("\nContact list is full!\n");
                    break;
                }

                printf("\n Enter the name of the contact: ");
                scanf(" %49[^\n]", c[n].name);

                printf("\n Enter the contact number: ");
                scanf("%14s", c[n].contact);

                printf("\n Enter the email: ");
                scanf("%49s", c[n].email);

                printf("\n CONTACT ADDED SUCCESSFULLY\n");
                n++;
                break;

            case 2:
                printf("\n Enter name to be searched: ");
                scanf(" %49[^\n]", search);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(c[i].name, search) == 0) {
                        printf("\nContact Found\n");
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].contact);
                        printf("Email : %s\n", c[i].email);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\nContact Not Found\n");
                }
                break;

            case 3:
                printf("\n Enter name to delete: ");
                scanf(" %49[^\n]", search);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (strcmp(c[i].name, search) == 0) {
                        found = 1;

                        for (int j = i; j < n - 1; j++) {
                            c[j] = c[j + 1];
                        }

                        n--;
                        printf("\nContact Deleted Successfully!\n");
                        break;
                    }
                }
                if (!found) {
                    printf("\nContact Not Found\n");
                }
                break;

            case 4:
                printf("\nExiting program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}