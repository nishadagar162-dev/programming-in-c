 //day2 
  //code 3

#include <stdio.h>

int main()
{
    float l, b, area, perimeter;

    scanf("%f %f", &l, &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area=%.0f, Perimeter=%.0f", area, perimeter);

    return 0;
}
 //code 4
#include <stdio.h>

int main()
{
    float r, area, circumference;
    float pi = 3.14;

    scanf("%f", &r);

    area = pi * r * r;
    circumference = 2 * pi * r;

    printf("Area=%.2f, Circumference=%.2f", area, circumference);

    return 0;
}
