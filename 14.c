#include <stdio.h>

int main()
{
    int loop=1;
    float balance=5000,withdraw;
    while (loop==1)
    {
        printf("Welcome to bank. Please enter amount of money you want to withdraw\n");
        scanf("%f",&withdraw);
        if (withdraw < 0)
        {
            printf("Nice try\n");
        }
        else if (withdraw <= balance)
        {
            balance = balance - withdraw ;
            printf("Remaining balance is %f",balance);
        }
        else
        {
            printf("Insufficient balance, cannot withdraw\n");
        }
        printf("Do you want to withdraw more money? 1 for yes, 0 for no\n");
        scanf("%d",&loop);
        if (loop!=0 && loop!=1)
        {
            printf("Please use proper values, 0 or 1\n");
            loop=0;
        }
    }
    return 0;
}
