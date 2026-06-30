#include<stdio.h>
int main(){
    int choice,a,b,c;
    printf("----CALCULATOR----");
    printf("\n What operation do you want to perform?");
    printf("\n 1.+");
    printf("\n 2. -");
    printf("\n 3. *");
    printf("\n 4./");
    printf("\n 5.%");
    printf("\n enter your choice:");
    scanf("%d",&choice);

    switch(choice){
        case1:
        printf("\n enter the value of two numbers:");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("\n the sum of two number is:%d",c);
        break;
        case 2:
        printf("\n enter the value of two number you want to subtract");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("\n the difference of two numbers is:%d",c);
        break;
        case 3:
        printf("\n enter two numbers to be multiplied");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("\n the multiplication of two numbers is:%d",c);
        break;
        case 4:
        printf("\n enter the two numbers to be divided:");
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("\n the quotient is:%d",c);
        break;
        case 5:
        printf("\n enter the two numbers:");
        scanf("%d%d",&a,&b);
        c=a%b;
        printf("\n the remainder is:%d",c);
        break;        
    }
    printf("\n Operation carried out successfully");
    return 0;
}