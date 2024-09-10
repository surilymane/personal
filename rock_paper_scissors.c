#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char player_move[9];
    char computer_move[9];
    printf("Please enter rock, paper or scissors: ");
    scanf("%s", player_move);
    
    const int max = 3;
    const int min = 1;
    int rd_int = rand() % (max - min + 1) + min;
    int player_int = 0;
    
    if (rd_int == 1){
        strcpy(computer_move, "rock");
    }
    else if (rd_int == 2){
        strcpy(computer_move, "paper");
    }
    else {
        strcpy(computer_move, "scissors");
    }
    
    if (strcmp(player_move, "rock") == 0){
        player_int = 1;
    }
    else if (strcmp(player_move, "paper") == 0){
        player_int = 2;
    }
    else{
        player_int = 3;
    }
    
    if ((player_int == 1 && rd_int == 1) || (player_int == 2 && rd_int == 2) || (player_int == 3 && rd_int == 3)){
        printf("Computer's choice: %s\n", computer_move);
        printf("It is a Draw!\n");
    }
    else if ((player_int == 1 && rd_int == 3) || (player_int == 2 && rd_int == 1) || (player_int == 3 && rd_int == 2)){
        printf("Computer's choice: %s\n", computer_move);
        printf("Player wins!\n");
    }
    else {
        printf("Computer's choice: %s\n", computer_move);
        printf("Computer wins!\n");
    }
}