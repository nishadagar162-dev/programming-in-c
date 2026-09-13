//day 12
//code 23
#include <stdio.h>

int main()
{
    int days, fine;

    scanf("%d", &days);

    if(days <= 5)
        fine = days * 2;
    else if(days <= 10)
        fine = 5 * 2 + (days - 5) * 4;
    else if(days <= 30)
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    else
    {
        printf("Membership Cancelled");
        return 0;
    }

    printf("Fine=Rs.%d", fine);

    return 0;
}
//code 24
#include <stdio.h>

int main()
{
    int units;
    float bill;

    scanf("%d", &units);

    if(units <= 100)
        bill = units * 5;
    else if(units <= 200)
        bill = 100 * 5 + (units - 100) * 7;
    else if(units <= 300)
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    else
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12;

    printf("Bill=%.2f", bill);

    return 0;
}
