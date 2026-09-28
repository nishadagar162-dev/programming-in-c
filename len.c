//day 43
//code 85
#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    while(str[len] != '\0')
    {
        len++;
    }

    printf("Reversed string: ");

    for(i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
//code 86
#include <stdio.h>

int main()
{
    char str[100];
    int i, len = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
