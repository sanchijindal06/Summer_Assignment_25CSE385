#include<stdio.h>
int main(){
    int secret=18;
    int guess;
    do{
        printf("\n enter your guess:");
        scanf("%d",&guess);
        if(guess>secret){
            printf("\n Too high, try again!");
        }
        else if(guess<secret){
            printf("\n Too low, try again");
        }
        else{
            printf("\n You guessed the number");
        }

        
    }while(guess!=secret);
    return 0;
}