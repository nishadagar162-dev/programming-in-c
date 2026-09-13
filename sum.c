day 1
1
#include <stdio.h>

int main()
{
    int a, b, sum;

    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Sum = %d", sum);

    return 0;
}
(2)
  #include <stdio.h>

int main()
{
    int a, b;
    int sum, diff, product, quotient;

    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;

    printf("Sum=%d, Diff=%d, Product=%d", sum, diff, product);

    if (b != 0)
    {
        quotient = a / b;
        printf(", Quotient=%d", quotient);
    }
    else
    {
        printf(", Quotient=Division by zero not possible");
    }

    return 0;
}
