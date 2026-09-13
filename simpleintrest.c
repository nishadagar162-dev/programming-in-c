//day 5
//codee 9
#include<stdio.h>
#include <math.h>

int main()
{
    float p, r, t, si, ci;

    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest=%.2f\n", si);
    printf("Compound Interest=%.2f", ci);

    return 0;
}
//code 10
#include <stdio.h>

int main()
{
    int sec, h, m, s;

    scanf("%d", &sec);

    h = sec / 3600;
    sec = sec % 3600;

    m = sec / 60;
    s = sec % 60;

    printf("%02d:%02d:%02d", h, m, s);

    return 0;
}
