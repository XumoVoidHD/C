#include <stdio.h>
// int main()
// {
// int rows;
// printf("Enter the number of lines you want to print : ");
// scanf("%d",&rows);
// for(int i=1;i<=rows;i++){
//     for(int j=rows;j>=1;j--){
//         printf("*");
//     for(int k=)

//     }
// }

// }

int main()
{
    int n = 5;

    for(int j = 1; j<= (n*2)-1; j++)
    {
        printf("* ");
    }
    printf("\n");
    for(int i = 1; i < n; i++)
    {   
        for(int j = 1; j <= n-i; j++)
        {
            printf("* ");
        }
        for(int j = 1; j <= (i*2)-1; j++)
        {
            printf("  ");
        }
        for(int j = 1; j <= n-i; j++)
        {
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}