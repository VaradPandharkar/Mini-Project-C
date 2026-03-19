#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int GetComputerChoice();
    int GetUserChoice();
    void CheckWinner(int UserChoice, int ComputerChoice);

int main(){
    
    srand(time(NULL));
    printf("*** ROCK PAPER SCISSORS ***\n");

    int UserChoice = GetUserChoice();
    int ComputerChoice = GetComputerChoice();

    switch(UserChoice){
        case 1:
        printf("You Choose Rock\n");
        break;
        case 2:
        printf("You Choose Paper\n");
        break;
        case 3:
        printf("You Choose Scissors\n");
        break;
    }

     switch(ComputerChoice){
        case 1:
        printf("Computer Choose Rock\n");
        break;
        case 2:
        printf("Computer Choose Paper\n");
        break;
        case 3:
        printf("Computer Choose Scissors\n");
        break;
    }


   
    return 0;
}
    int GetComputerChoice(){

}
    int GetUserChoice(){
        int choice = 0;
        do{
            printf("Choose an Option\n");
            printf("1. ROCK\n");
             printf("2. PAPER\n");
              printf("3. SCISSORS\n");
              printf("Enter Your Choice: ");
              scanf("%d",&choice);

        }while(choice < 1 || choice > 3); 

        return choice;
    }
    void CheckWinner(int UserChoice, int ComputerChoice){

    }