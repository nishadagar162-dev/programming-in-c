//day 40
//code 79
#include <stdio.h>

int main()
{
    int a[10][10];
    int r, c;
    int i, j, d;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    for(d = 0; d < r + c - 1; d++)
    {
        for(i = 0; i < r; i++)
        {
            j = d - i;

            if(j >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
            }
        }

        printf("\n");
    }

  return 0;
}
//code 80
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    printf("Enter first matrix:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    /* Initialize result matrix with 0 */

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            c[i][j] = 0;
        }
    }

    /* Matrix multiplication */

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            for(k = 0; k < c1; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Result matrix:\n");

    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }

        printf("\n");
    }

    return 0;
}
