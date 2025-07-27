#include <stdio.h>

int main()
{
    int minutes=0;
    float distance=0;
    printf("Welcome to Marathon.\n");
    while (distance<=10)
    {
        printf("Minute %d : %Distance Covered : %f km\n",minutes,distance);
        distance = distance + 0.5;
        minutes++;
        sleep(1);
    }
    printf("Marathon Complete!\n");
    return 0;
}
