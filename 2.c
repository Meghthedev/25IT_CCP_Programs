#include <stdio.h>
float area(float length,float breadth)
{
    return length*breadth;
}
float perimeter(float length,float breadth)
{
    return (2 * ( length + breadth));
}
int main()
{
    float len1=70,bread1=90;
    if (len1 > 0 && bread1 > 0)
    {
        printf("|-----------------------------------------------|\n");
        printf("|The Length is %f                        |\n", len1);
        printf("|The Breadth is %f                       |\n", bread1);
        printf("|Area = %f * %f                   |\n", len1, bread1);
        printf("|Area = %f                             |\n",area(len1,bread1));
        printf("|Perimeter = 2 * (%f + %f)        |\n", len1, bread1);
        printf("|Perimeter = %f                         |\n",perimeter(len1,bread1));
        printf("|-----------------------------------------------|\n");
    }
    else
    {
        printf("Please use correct length or breadth value!\n");
        return 1;
    }
    printf("Do you want to compute fencing cost and grass laying cost? enter 1 for yes, 0 for no\n");
    int fencegrassornot;
    scanf("%d",&fencegrassornot);
    if (fencegrassornot==0)
    {
        printf("Ok\n");
    }
    else if(fencegrassornot==1)
    {
        float fence,grass;
        printf("Please enter fencing cost per meter and grass laying cost per meter square seperated by space\n");
        scanf("%f %f",&fence,&grass);
        printf("Your Fencing cost is %f and cost to lay grass is %f\n",fence*perimeter(len1,bread1),grass*area(len1,bread1));
    }
    else
    {
        printf("Please use 0 or 1!\n");
        return 1;
    }
    int loop;
    printf("Do you want to calculate area and perimeter for multiple parks, 1 for yes, 0 for no \n");
    scanf("%d",&loop);
    while(loop==1)
    {
        float length,breadth;
        printf("Please enter length and breadth of park\n");
        scanf("%f %f",&length,&breadth);
        printf("The area is %f meter square and perimeter is %f meters\n",area(length,breadth),perimeter(length,breadth));
        printf("Do you want to calculate for another park? 0 for no, 1 for yes\n");
        scanf("%d",&loop);
    }
}
