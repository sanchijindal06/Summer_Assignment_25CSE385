#include<stdio.h>
#include<string.h>
struct Tickets{
    int ticketNo;
    char name[50];
    int seats;
}t ;
int main(){
    struct  Ticket;
    int choice,ticketNo,found,i;
    do{
        printf("\n ---- TICKET BOOKING SYSTEM----");
        printf("\n 1. book ticket");
        printf("\n 2. cancel ticket");
        printf("\n enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\n enter ticket number:");
            scanf("%d",&t.ticketNo);
            printf("\n enter name");
            scanf("%s",&t.name);
            printf("\n enter number of seats:");
            scanf("%d",&t.seats);
            printf("\n ---TICKET BOOKED SUCCESSFULLY---");
            
            break;
            case 2:
            printf("\n enter ticket number to be cancelled");
            scanf("%d",&t.ticketNo);
            found=0;
            if(t.ticketNo==ticketNo){
                found=1;
                printf("\n Ticket cancelled successfully");
            }
        }
        
    }while(choice!=2);
    printf("\n Thank you!");
    return 0;
}