//day 16
//code 31
#include <stdio.h>

int main()
{
    int n, rem, binary = 0, place = 1;

    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }

    printf("Binary=%d", binary);

    return 0;
}
//code 32
#include <stdio.h>

int main()
{
    int n, original, rev = 0, digit;

    scanf("%d", &n);

    original = n;

    while(n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    if(original == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
