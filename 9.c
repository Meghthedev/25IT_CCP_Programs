#include <stdio.h>

int main()
{
    float amount;
    printf("Please enter the bill amount \n");
    scanf("%f",&amount);

    printf("Your current bill before discount is %f Rupees\n",amount);
    if (amount <= 1000)
    {
        printf("Your final bill amount is %f\n",amount);
    }
    else if (amount > 1000 && amount <=5000)
    {
        printf("You get 10 percent discount!\n");
        printf("Your final bill amount is %f\n",amount-(amount*10/100));
    }
    else if (amount > 5000)
    {
        printf("You get 20 percent discount!\n");
        printf("Your final bill amount is %f\n",amount-(amount*20/100));
    }
    return 0;
}
