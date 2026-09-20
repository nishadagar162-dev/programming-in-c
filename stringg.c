//day 39
//code 77
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        count++;
        i++;
    }

    printf("Number of characters = %d", count);

    return 0;
}
//code 78
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
