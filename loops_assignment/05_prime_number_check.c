// Check whether an integer is prime.
#include <stdio.h>

int main(void)
{
    int n;
    int prime = 1;

    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input. Enter an integer.\n");
        return 1;
    }

    if (n < 2) {
        prime = 0;
    } else {
        // i <= n / i avoids the possible overflow of i * i.
        for (int i = 2; i <= n / i; i++) {
            if (n % i == 0) {
                prime = 0;
                break;
            }
        }
    }

    printf(prime ? "true\n" : "false\n");
    return 0;
}
