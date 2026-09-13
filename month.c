//day 11
//code 21
#include <stdio.h>

int main()
{
    int m;

    scanf("%d", &m);

    switch(m)
    {
        case 1: printf("January - 31 days"); break;
        case 2: printf("February - 28 or 29 days"); break;
        case 3: printf("March - 31 days"); break;
        case 4: printf("April - 30 days"); break;
        case 5: printf("May - 31 days"); break;
        case 6: printf("June - 30 days"); break;
        case 7: printf("July - 31 days"); break;
        case 8: printf("August - 31 days"); break;
        case 9: printf("September - 30 days"); break;
        case 10: printf("October - 31 days"); break;
        case 11: printf("November - 30 days"); break;
        case 12: printf("December - 31 days"); break;
        default: printf("Invalid Month");
    }

    return 0;
}
//code 22
#include <stdio.h>

int main()
{
    float cp, sp, profit, loss;

    scanf("%f %f", &cp, &sp);

    if(sp > cp)
    {
        profit = sp - cp;
        printf("Profit Percentage=%.2f", profit * 100 / cp);
    }
    else if(cp > sp)
    {
        loss = cp - sp;
        printf("Loss Percentage=%.2f", loss * 100 / cp);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}

