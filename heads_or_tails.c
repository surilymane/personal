#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char player_choice[6];
    char computer_choice[6];
    
    printf("Please enter heads or tails: \n");
    scanf("%s", player_choice);
    
    const int min = 1;
    const int max = 2;
    int random_int = rand() % (max - min + 1) + min;
    
    if (random_int == 1){
        strcpy(computer_choice, "heads");
    }
    else{
        strcpy(computer_choice, "tails");
    }
    
    if ((strcmp(player_choice, "heads") && strcmp(computer_choice, "heads")) || (strcmp(player_choice, "tails") && strcmp(computer_choice, "tails"))){
        printf("You win!!");
    }
    else{
        printf("You lost :(");
    }
}