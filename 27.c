#include <stdio.h>

int main()
{
    int months,value=1,v1;
    printf("Please enter number of months\n");
    scanf("%d",&months);
    if (months >= 1)
    {
        for(int i=1;i<=months;i++)
        {
            if(i<=2)
            {
                value=1;
                printf("%d\n",value);
            }
        v1 = value;
        value = value + v1;
        printf("%d\n",value);
        }
    }

    return 0;
}
