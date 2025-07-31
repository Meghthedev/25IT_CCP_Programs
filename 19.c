#include <stdio.h>

int main()
{
    printf("Pattern 1\n");
    int value=1;
    for(int v=1; v<=5; v++)
    {
        for (int h=1; h<=5; h++)
        {
            if(value==1)
            {
               printf("1 ");
            }
            if(h>1)
            {
                printf("0 ");
            }
        }
    printf("\n");
    }



    return 0;
}
