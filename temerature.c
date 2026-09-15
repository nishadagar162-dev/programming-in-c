//day 22
//code 43
#include <stdio.h>

int main()
{
    int n, temp, digit, i, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Sum = %.2f", sum);

    return 0;
}
    while (temp > 0)
    {
        digit = temp % 10;

        fact = 1;
        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is a strong number", n);
    else
        printf("%d is not a strong number", n);

    return 0;
}
//code 44
