//day 33
//code 65
#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if (key < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (found == 0)
        printf("Element not found");

    return 0;
}
//code 66
#include <stdio.h>

int main()
{
    int a[100], n, i, x, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element: ");
    scanf("%d", &x);

    pos = n;

    for (i = 0; i < n; i++)
    {
        if (x < a[i])
        {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    n++;

    printf("Array after insertion:\n");

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
