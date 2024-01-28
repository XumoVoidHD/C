#include <stdio.h>
#include <stdbool.h>
 
int main()
{
    int num = 18;

    for(int i = 1; i <= num; i++)
    {
        if (i == (int)((num+1)/2))
        {
            for(int j = 1; j <= num; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(int j = 1; j <= (int)(num-1); j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}