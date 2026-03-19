#include<stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("*** Welcome To The Bank ***");

    do{
        printf("\nSelect an option\n: ");
         printf("1. Check Balance\n: ");
          printf("2. Deposit Money\n: ");
           printf("3. Withdraw Money\n: ");
            printf("4. Exit\n: ");
             printf("\nEnter Your Choice: ");
              scanf("%d",&choice);


              switch(choice){
                case 1:
                 checkBalance(balance);
                 break;
                case 2:
                 balance = balance + deposit();
                 break;
                case 3:
                 balance = balance - withdraw(balance);
                 break;
                case 4:
                 printf("\nThank You For Using The Bank!\n");
                 break;
                default:
                 printf("\nInvalid Choice! Please Select 1 - 4\n");
              }
              

    }while(choice != 4);

    return 0;
}

void checkBalance(float balance){
    printf("\nYour Current Balance is: $%.2f\n",balance);
}

float deposit(){

    float amount = 0.0f;
     printf("\nEnter Amount to Deposit: $");
      scanf("%f",&amount);


      if(amount < 0){
        printf("Invalid Amount\n");
        return 0.0f; 
      }

    else{
        printf("Successfully Deposited $%.2f\n", amount);
        return amount;
    }
}
float withdraw(float balance){

    float amount = 0.0f;

    printf("\nEnter Amount to Withdraw: $");
     scanf("%f", &amount);

     if(amount < 0){
        printf("Invalid Amount!\n");
        return 0.0f;
     }

     else if(amount > balance){
        printf("Insufficient Funds! Your Balance is $%.2f\n", balance);
         return 0.0f;
     }

     else{
        printf("Successfuly Withdraw $%.2f\n", amount);
        return amount;

    
     }
}
