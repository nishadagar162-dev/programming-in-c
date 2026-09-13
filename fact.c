//day 15
//code 29
#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial=%lld", fact);

    return 0;
}
//code 30
#include <stdio.h>

int main()
{
    int n, rev = 0, digit;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    printf("Reverse=%d", rev);

    return 0;
}
