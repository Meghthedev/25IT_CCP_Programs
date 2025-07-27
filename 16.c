#include <stdio.h>

int main()

{
    int userpick,computerpick,stick=21;
    printf("Welcome to Matchstick game! Please start the game by entering a number of matchstick from 1,2,3,4\n");

    while (stick > 1)
    {
        scanf("%d",&userpick);
        if (userpick <= 4)
        {
        stick = stick - userpick;
        printf("Remaining stick is %d\n",stick);
        computerpick = 5 - userpick;
        printf("Computer pick is %d\n",computerpick);
        stick = stick - computerpick;
        printf("Remaining stick is %d\n",stick);
        }
        else
        {
            printf("Please select 1-4 sticks!\n");
            return 1;
        }
    }
    printf("Computer Won! Better luck next time\n");
    return 0;
}
