//day 4
//code 7
#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: %d %d", a, b);

    return 0;
}
//code 8
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum=%d", sum);

    return 0;
}
