#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,semiperimeter,area;
    printf("Please Enter value of side A , B , and C\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a < 0 || b < 0 || c < 0)
    {
        printf("Please enter positive side lengths\n");
        return 1;
    }
    if(a + b <= c )
    {
        printf("Invalid Triangle, the lengths do not form a valid triangle");
        return 1;
    }
    semiperimeter=(a+b+c)/2;
    area=sqrt((semiperimeter)*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c));
    printf("Valid Triangle, Area is %0.2f\n",area);
    return 0;
}
