//day 32
//code 63
#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n1; i++)
        c[i] = a[i];

    for (i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    printf("Merged array:\n");

    for (i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}
//code 64
#include <stdio.h>

int main()
{
    int n, digit, i;
    int count[10] = {0};
    int max = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            result = i;
        }
    }

    printf("Digit occurring most times = %d", result);

    return 0;
}
