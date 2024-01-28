#include <stdio.h>

int main()
{
    int length = 20;
    int breadth = 15;

    for(int i = 1; i <= breadth; i++)
    {
        if(i == 1 || i == breadth)
        {            
            for(int j = 1; j <= length; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for(int j = 1; j <= (length*2)-1; j++)
            {
                if(j == 1)
                {
                    printf("*");
                }
                else if (j == (length*2)-1)
                {
                    printf("*\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
    }

    return 0;
}