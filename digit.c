//day 20
//code 39
#include <stdio.h>

int main()
{
    int n, digit, product = 1;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit % 2 != 0)
            product = product * digit;

        n = n / 10;
    }

    printf("Product=%d", product);

    return 0;
}
//code 40
#include <stdio.h>

int main()
{
    int n, digit, result = 0, place = 1;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;

        if(digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("1's Complement=%d", result);

    return 0;
}
