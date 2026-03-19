#include <stdio.h>
#include <ctype.h>

int main(){
    char Questions [][100] = {"What is the largest planet in the solar system?",
                              "What is the Hottest Plannet?",
                              "What Plannet has the most moon?",
                              "Is the Earth flat?"};

    char options [][100] = {" A. JUPITER\n B. SATURN\n C. URANUS\n D. NEPTUNE",
                            " A. MERCURY\n B. VENUS\n C. EARTH\n D. MARS",
                            " A. EARTH\n B. MARS\n C. JUPITER\n D. SATURN",
                            " A. YES\n B. NO\n C. MAYBE\n D. SOMETIMES"};

    char Answerkey [] = {'A','B', 'D', 'B'};

        int QuestionCount = sizeof(Questions) / sizeof(Questions[0]);

        char guess = '\0';
        int score = 0;

        printf("*** QUIZ GAME ***\n");

        for(int i = 0; i < QuestionCount; i++){
            printf("\n%s\n ", Questions[i]);
            printf("\n%s\n ", options[i]);
            printf("\nEnter your choice: ");
            scanf(" %c", &guess);

        guess = toupper(guess);

            if(guess == Answerkey[i]){
                    printf("CORRECT!\n");
                score++;
        }
            else{
                    printf("WRONG!\n");
            }
   
}

    printf("\nYour Score is %d out of %d points\n", score, QuestionCount);
return 0;
}