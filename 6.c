#include <stdio.h>

int main()

{
    float celsius,farenheit;
    printf("Please enter temperature in Celsius\n");
    scanf("%f",&celsius);
    farenheit=(celsius*9/5)+32;
    printf("The temperature in farenheit is %f\n",farenheit);
    return 0;
}
