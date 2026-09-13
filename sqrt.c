//day 9 
//code 17
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Two Real and Distinct Roots\n");
        printf("Roots=%.2f %.2f", r1, r2);
    }
    else if(d == 0)
    {
        r1 = -b / (2 * a);

        printf("Two Real and Equal Roots\n");
        printf("Root=%.2f", r1);
    }
    else
    {
        printf("Complex Roots");
    }

    return 0;
}
// code 18
#include <stdio.h>

int main()
{
    float p;

    scanf("%f", &p);

    if(p >= 90)
        printf("Grade A");
    else if(p >= 80)
        printf("Grade B");
    else if(p >= 70)
        printf("Grade C");
    else if(p >= 60)
        printf("Grade D");
    else
        printf("Grade F");

    return 0;
}
