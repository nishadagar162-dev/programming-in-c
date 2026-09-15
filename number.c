//day 21
//code 41
#include <stdio.h>

int main()
{
    int n, first, last, middle, digits, result, p;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    p = 1;
    digits = n;

    while (digits >= 10)
    {
        digits = digits / 10;
        p = p * 10;
    }

    first = digits;
    middle = (n % p) / 10;

    result = last * p + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
//code 42
#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == n)
        printf("%d is a perfect number", n);
    else
        printf("%d is not a perfect number", n);

    return 0;
}
