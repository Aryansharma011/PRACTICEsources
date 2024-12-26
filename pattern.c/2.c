#include <stdio.h>
int main()
{
    int rows;
    printf("How many rows do you need : ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}