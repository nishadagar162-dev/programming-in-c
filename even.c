// day 6 
//code 11
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
//code 12
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if(n >= 0)
    {
        if(n == 0)
            printf("Zero");
        else
            printf("Positive");
    }
    else
    {
        printf("Negative");
    }

    return 0;
}
