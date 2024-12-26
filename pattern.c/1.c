#include <stdio.h>
int main()
{
    int rows;
    printf("How many rows do you need : ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++) // bahar ka loop rows ya no of line ko represent krta h
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //   for (int i = 0; i <= rows; i++) 
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    return 0;
}