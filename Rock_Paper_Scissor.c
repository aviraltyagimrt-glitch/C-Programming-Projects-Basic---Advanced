#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
char a[50];
void rock_paper_scissor(){
    printf("Welcome to the Rock , Paper and Scissor Game !!!\n");
    printf("Before Proceeding with the game kindly\nEnter the name of the player who's gonna play this game\n");
    fgets(a,sizeof(a),stdin);
    // a[strcspn(a, "\n")] = '\0';   // removes the trailing newline
    printf("Welcome to the game %sLet's Play\n",a);
    for(int i = 0; i<=2; i++){
        printf("Kindly look up at these instructions before proceeding\n");
        printf("You have 3 chances to play the game and win against the computer\n");
        printf("If computer chooses the number :\n(1) then it means Rock\n(2) then it means Paper\n(3) then it means Scissor\n");
        printf("Press 1 if you want to choose Rock\nPress 2 if you want to choose Paper\nPress 3 if you want to Choose Scissor\n");
        printf("Enter the number according to your choice\n");
        int b;
        scanf("%d",&b);
        getchar();
        srand(time(NULL));
        int c;
        c = (rand()%3)+1;
        if (b == c){
            printf("Sorry %sit's an draw\n",a);
            continue;
        }
        else if(b == 1 && c == 2){
            printf("Sorry %sComputer Won because Paper beats Rock\n",a);
            continue;
        }
        else if(b == 2 && c == 3){
            printf("Sorry %sComputer Won because Scissor beats Paper\n",a);
            continue;
        }
        else if(b == 3 && c == 1){
            printf("Sorry %sComputer Won because Rock beats Scissor\n",a);
            continue;
        }
        else if(b == 1 && c == 3){
            printf("Congrats %sYou won because Rock beats Scissor\n",a);
            continue;
        }
        else if(b == 2 && c == 1){
            printf("Congrats %sYou won because Paper beats Rock\n",a);
            continue;
        }
        else if(b == 3 && c == 2){
            printf("Congrats %sYou Won because Scissor beats Paper\n",a);
            continue;
        }
    }
}
int main(int argc , char *argv[]){
    rock_paper_scissor();
    while(1)
{
    printf("Press 1 Continue and 0 to exit the game\n");
    int z;
    scanf("%d",&z);
    if (z == 1){
        rock_paper_scissor();
        continue;
    }
    else if (z == 0) {
        printf("Thank you for playing the game %sHope you enjoyed it\n",a);
        printf("Developed by Aviral Tyagi\n");
        break;
    }
}


    return 0;
}
