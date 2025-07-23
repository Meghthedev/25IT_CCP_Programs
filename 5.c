#include <stdio.h>

int main()

{
    float percent_women=48.4,percent_literate_women=62.84,percent_literate_men=80.95,percent_literate_total=85.95;
    int total_population=1441981744,total_women=total_population*percent_women/100,total_men=total_population-total_women;
    float literate_women=total_women*percent_literate_women/100,literate_men=total_men*percent_literate_men/100,literate_total=percent_literate_total*total_population/100;

    printf("The Total Population of Bharat is %d\n",total_population);
    printf("The Total Population of Women in Bharat is %d\n",total_women);
    printf("The Total Population of Men in Bharat is %d\n",total_men);
    printf("The Total Population of Literate people in Bharat is %f\n",literate_total);
    printf("The Total Population of Literate Women in Bharat is %f\n",literate_women);
    printf("The Total Population of Literate Men in Bharat is %f\n",literate_men);
    printf("The Literacy Gap between Men and Women is %f",literate_men-literate_women);



    return 0;
}
