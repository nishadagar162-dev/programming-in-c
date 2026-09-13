//day 17
//code 33
#include <stdio.h>
#include <math.h>

int main()
{
    int n, original, temp, digit, count = 0;
    int sum = 0;

    scanf("%d", &n);

    original = n;
    temp = n;

    while(temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
//code 34
#include <stdio.h>

int main()
{
    int n, i, flag = 0;

    scanf("%d", &n);

    if(n < 2)
    {
        printf("Not Prime");
        return 0;
    }

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
