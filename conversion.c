// day 3 
// code 5
#include <stdio.h>

int main()
{
    float c, f;

    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Fahrenheit=%.2f", f);

    return 0;
}
//code 6
#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: %d %d", a, b);

    return 0;
}

