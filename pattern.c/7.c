#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int m=n;
        for (int j = i; j <= m; j++)
        {
            printf("%d", j);
        }
            m--;
        printf("\n");
    }
    return 0;
}
// ldmlksdlsmzslkdzsdlzsdmlzmslzslsl