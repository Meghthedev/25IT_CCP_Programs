#include <stdio.h>

int main()
{
    int seats[5][10];
    int no_reserved,row,column;
    printf("Please enter the number of reserved seats\n");
    scanf("%d",&no_reserved);
    for(int i=0;i<no_reserved;i++)
    {
        printf("Enter row and seat number for reserved seat %d (eg, 2 5)",i+1);
        scanf("%d%d",&row,&column);
    }
    printf("Seating Chart:\n")
    for(int v=1;v<=5;v++)
    {
        for(int h=1;h<=10;h++)
        {
            printf("Row %d: ");
            printf("%d",seats);
        }
    }



    return 0;
}
