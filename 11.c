#include <stdio.h>

int main()

{
    float marks;
    printf("Please enter your marks to check your grade\n");
    scanf("%f",&marks);
    if (marks < 0 ||
         marks > 100)
    {
        printf("Please enter correct marks!\n");
        return 1;
    }
    else if (marks >= 90)
    {
        printf("Your Grade is A\n");
    }
    else if (marks >=80 && marks < 90)
    {
        printf("Your Grade is B\n");
    }
    else if (marks >=70 && marks < 80)
    {
        printf("Your Grade is C\n");
    }
    else if (marks >=60 && marks < 70)
    {
        printf("Your Grade is D\n");
    }
    else if (marks < 60)
    {
        printf("Your Grade is F\n");
    }
    return 0;
}
