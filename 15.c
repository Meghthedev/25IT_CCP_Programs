#include <stdio.h>

int main()
{
    int seconds;
    printf("Welcome to timer. enter the time you want in seconds\n");
    scanf("%d",&seconds);
    while (seconds > 0)
    {
        printf("Time Remaining: %d\n",seconds);
        sleep(1);
        seconds--;
    }
    printf("Time Up!\n");
    return 0;
}
