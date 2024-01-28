#include <stdio.h>

// int main()
// {
//     int n = 4;

//     for(int i = 1; i <= n ; i++)
//     {
//         for(int j = 1; j <= (2*n)-1 ; j++)
//         {
//             printf("%d ",j);
//         }

//         printf("\n");
//     }
//     return 0;
// }

int main()
{
    int n = 5;

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
            printf("%d ", a);
            a++;
        }
        for(int j = 1; j <= (i*2)-1; j++)
        {
            printf("  ");
            a++;
        }
        for(int j = 1; j <= n-i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}