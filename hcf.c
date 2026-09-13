// day 18
//code 35
#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d ", i);
    }

    return 0;
}
//code 36
#include <stdio.h>

int main()
{
    int a, b, i, hcf = 1;

    scanf("%d %d", &a, &b);

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF=%d", hcf);

    return 0;
}
