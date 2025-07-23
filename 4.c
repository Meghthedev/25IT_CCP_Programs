#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
int a;
float b;
char c;
double d;
long e;

printf("The size of integer is %d bytes\n",sizeof(a));
printf("The size of float is %d bytes\n",sizeof(b));
printf("The size of character is %d bytes\n",sizeof(c));
printf("The size of double is %d bytes\n",sizeof(d));
printf("The size of long is %d bytes\n",sizeof(e));

printf("The range of integer data type is [%d,%d]\n",INT_MIN,INT_MAX);
printf("The range of float data type is [%e,%e]\n",FLT_MIN,FLT_MAX);
printf("The range of character data type is [%d,%d]\n",CHAR_MIN,CHAR_MAX);
printf("The range of double data type is [%e,%e]\n",DBL_MIN,DBL_MAX);
printf("The range of long data type is [%e,%e]\n",LONG_MIN,LONG_MAX);



return 0;
}
