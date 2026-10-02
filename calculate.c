//day 44
//code 87
#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // Store original number to compare later

    while (temp > 0) {
        digit = temp % 10; // Extract the last digit

        // Calculate factorial of the digit
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact; // Add factorial to sum
        temp /= 10;  // Remove the last digit
    }

    // Check if sum of factorials equals the original number
    if (sum == num && num > 0) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is NOT a Strong Number.\n", num);
    }

    return 0;
}
//day 48
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            sum += (double)(2 * i - 1) / (2 * i);
        }
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
