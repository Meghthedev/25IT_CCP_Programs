#include <stdio.h>

int main()
{
    int n=20;
    int id[21]={1,2,3,4,5,6,7,8,9,10,11,'\0',12,13,15,16,17,18,19,20};
    for(int i=0;i<n;i++)
    {
        if(id[i]=='\0')
        {
            printf("ID number %d is empty",i+1);
        }
    }
    return 0;
}
