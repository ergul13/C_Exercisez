#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char you, char comp){

     char r,p,s;

    if(you==comp)
    return -1;

    if(you == 'r' && comp =='s')
        return 1;
    else if(you == 'r' && comp =='p')
        return 0;

    if(you == 'p' && comp =='r')
        return 1;
    else if(you == 'p' && comp =='s')
        return 0;

    if(you == 's' && comp =='p')
        return 1;
    else if(you == 's' && comp =='r')
        return 0;
         
}

int main(){
    int n;

    char you,comp,result;

    srand(time(NULL));
    n = rand() % 100;

    if(n<33){
        comp='s';
    }

    else if(n>=33 && n<66){
        comp = 'r';
    }

    else{
        comp = 'p';
    }

    printf("\n\n\n\n\t\t\t\tEnter r for ROCK, p for PAPER and s for SCISSOR\n\t\t\t\t\t\t\t");
    scanf("%c",&you);

    result = game(you,comp);

    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }
    else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    }
    else { 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }

    printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",you, comp);

    return 0;

}