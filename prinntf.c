//day 38
//code 75
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//code 76
#include <stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, flag = 1;

    scanf("%d %d", &n, &j);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
