#include <stdio.h>

int main()
{
    int num = 4;

    for(int i = 1; i <= num; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if ((i+j) % 2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}