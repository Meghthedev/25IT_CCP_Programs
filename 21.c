#include <stdio.h>

void main()
{
    int number[26],positive=0,negative=0,even=0,odd=0;
    for(int i=0;i<25;i++)
    {
        printf("Please enter the %d number\n",i+1);
        scanf("%d",&number[i]);
    }
    for(int i=0;i<25;i++) // For checking positive ( 0 is taken as positive) and negative
    {
        if(number[i]>=0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    for(int i=0;i<25;i++) // For checking positive ( 0 is taken as positive) and negative
    {
        if(number[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of positive numbers including 0 are %d\n",positive);
    printf("Number of negative numbers are %d\n",negative);
    printf("Number of even numbers are %d\n",even);
    printf("Number of odd numbers are %d\n",odd);
}
