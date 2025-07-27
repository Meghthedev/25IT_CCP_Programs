#include <stdio.h>

int main()
{
    int i=0;
    while(i<50)
    {
        i++;
        if (i%5 == 0)
        {
            printf("Book ID: %d (Special Edition)\n",i);
        }
        else
        {
            printf("Book ID: %d\n",i);
        }
    }
    return 0;
}
