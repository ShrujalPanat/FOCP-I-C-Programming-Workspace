// Calculate the quotient and remainder of two integers.
#include <stdio.h>

int main(void)
{
    int first, second;

    printf("Enter the first integer: ");
    if (scanf("%d", &first) != 1) {
        fprintf(stderr, "Invalid first integer.\n");
        return 1;
    }

    printf("Enter the second integer: ");
    if (scanf("%d", &second) != 1) {
        fprintf(stderr, "Invalid second integer.\n");
        return 1;
    }

    if (second == 0) {
        fprintf(stderr, "Error: division by zero is not allowed.\n");
        return 1;
    }

    printf("Quotient: %d\n", first / second);
    printf("Remainder: %d\n", first % second);

    return 0;
}
