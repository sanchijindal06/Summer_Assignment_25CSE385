#include<stdio.h>
int main(){
    int answer,score=0;
    printf("---WELCOME TO THE QUIZ---");
    printf("\n1- What is the capital of India?");
    printf("\n1- delhi");
    printf("\n2- mumbai");
    printf("\n3- kerela");
    printf("\n4- amritsar");
    printf("\nenter your answer:");
    scanf("%d",&answer);
    if(answer==2){
        score+=1;
        printf("\n correct answer");
    }
    else{
        printf("\n Incorrect answer");
    }
    printf("\n How many days are in a leap year?");
    printf("\n1-370");
    printf("\n2-400");
    printf("\n3-365");
    printf("\n4-366");
    printf("\n Enter your answer:");
    scanf("%d",&answer);
    if(answer==4){
        score++;
        printf("\n Correct answer");
    }
    printf("\n What is the legal age to vote in India?");
    printf("\n 1-17");
    printf("\n2-18");
    printf("\n3-20");
    printf("\n4-19");
    printf("\n enter your answer:");
    scanf("%d",&answer);
    if(answer==2){
        score++;
        printf("\n correct answer");
    }
    if(score==3){
        printf("\n Excellent");
    
    }
    else{
        printf("\nGood");
    }
    return 0;
    
}