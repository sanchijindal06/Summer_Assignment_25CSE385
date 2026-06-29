#include<stdio.h>
int main(){
    int choice;
    float balance=10000.0,amount;
    do{
        printf("\n Check Money");
        printf("\n withdraw money");
        printf("\n deposit money");
        printf("\n exit");
        printf("\n enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\n Current balance:%f",balance);
            break;
            case 2:
            printf("\n Amount to be deposited:");
            scanf("%f",&amount);
            balance+=amount;
            break;
            case 3:
            printf("\n enter amount to be withdrawn");
            scanf("%f",&amount);
            if(amount>balance){
                printf("\n Insufficient balance");
                
            }
            balance-=amount;
            break;
            case 4:
            printf("\n exiting");
            break;
            default:
            printf("\n Invalid choice");
            break;
            
        }
        printf("\n ----THANK YOU----\n");
    }while(choice!=4);
    return 0;
    

}