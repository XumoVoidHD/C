#include <stdio.h>

int main()
{
    int n = 5;
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
            printf("%d ",j);
        }
        for(int j = 1; j < x; j++)
        {
            printf("%d ",x-j);
        }
        printf("\n");
        x++;
    }

}

