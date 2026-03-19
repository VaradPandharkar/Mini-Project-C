#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("*** NUMBER GUESSING GAME ***\n");
    do{
        printf("Guess A Number Between %d - %d: ",min,max);
        scanf("%d",&guess);
        tries++;

        if(guess < answer){
            printf("TWO LOW\n");
        }
        else if(guess > answer){
            printf("TWO HIGH\n");
        }
        else{
            printf("CORRECT\n");
        }

    }while(guess != answer);

    printf("The Answer is %d\n",answer);

    printf("It took You %d tries",tries);

}