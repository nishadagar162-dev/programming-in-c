//day 19
//code 37
#include <stdio.h>

int main()
{
    int a, b, i, lcm;

    scanf("%d %d", &a, &b);

    for(i = 1; ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("LCM=%d", lcm);

    return 0;
}
//code 38
#include <stdio.h>

int main()
{
    int n, sum = 0, digit;

    scanf("%d", &n);

    while(n != 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum=%d", sum);

    return 0;
}
