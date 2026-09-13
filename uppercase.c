//day 8
// code 15
#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Uppercase Alphabet");
    else if(ch >= 'a' && ch <= 'z')
        printf("Lowercase Alphabet");
    else if(ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special Character");

    return 0;
}
//code 16
#include <stdio.h>

int main()
{
    int a, b, c, largest;

    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        largest = a;
    else if(b >= a && b >= c)
        largest = b;
    else
        largest = c;

    printf("Largest=%d", largest);

    return 0;
}
