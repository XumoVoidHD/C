#include <stdio.h>

int main()
{
    int n = 4;

    for(int j = 1; j<= (n*2)-1; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    
    for(int i = 1; i < n; i++)
    {   
        int a =  1; 

        for(int j = 1; j <= n-i; j++)
        {
            printf("%d ", j);
            a++;
        }
        for(int j = 1; j <= (i*2)-1; j++)
        {
            printf("  ");
            a++;
        }
        for(int j = 1; j <= n-i; j++)
        {
            printf("%d ", n-j-i+1);
            a++;
        }
        printf("\n");
    }
    return 0;
}