//day 37
//code 73
#include <stdio.h>

int main()
{
    int a[10][10], sum[10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        sum[i] = 0;

        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            sum[i] = sum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for(i = 0; i < r; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
//code 74
#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose of matrix:\n");

    for(j = 0; j < c; j++)
    {
        for(i = 0; i < r; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
