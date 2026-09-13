//day 13
//code 25
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch(op)
    {
        case '+': printf("%d", a + b); break;
        case '-': printf("%d", a - b); break;
        case '*': printf("%d", a * b); break;
        case '/': printf("%d", a / b); break;
        case '%': printf("%d", a % b); break;
        default: printf("Invalid Operator");
    }

    return 0;
}
//code 26
#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
