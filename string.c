//day 41
//code 81
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        i++;
    }

    printf("%d", i);

    return 0;
}
//code 82
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
