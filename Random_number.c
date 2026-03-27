#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 int main(){  

    srand(time(NULL));

    int min = 50;
    int max = 100;

    int RandomNum1 = (rand() % (max - min + 1)) + min;
    int RandomNum2 = (rand() % (max - min + 1)) + min;
    int RandomNum3 = (rand() % (max - min + 1)) + min;


    printf("%d %d %d", RandomNum1, RandomNum2, RandomNum3);

 return 0;
 }
  


