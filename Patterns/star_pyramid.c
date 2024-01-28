#include <stdio.h>

int main()
{
    int n = 4;
    int x = 1;
    int num = (n*2)-1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            printf("  ");
        }
        for(int j = 1; j <= x; j++)
        {
            printf("* ");
        }
        printf("\n");
        x+= 2;
    }

}

