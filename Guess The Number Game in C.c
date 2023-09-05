//Guess the number:
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, guess, nguess=1;
    srand(time(0));
    num = rand() % 100 + 1;
    
    do{
        printf("Guess a number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>num){
            printf("Guess lower\n");
        }
        else if(guess<num){
            printf("Guess higher\n");
        }
        else{
            printf("Yayy you got it in %d attempts!!", nguess);
        }
        nguess++;
    }while(guess != num);

    return 0;
}

 
