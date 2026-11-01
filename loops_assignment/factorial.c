// C program for calculating the factorial
#include <stdio.h>
int main()
{
    int factorial, i, n;
    factorial = 1;
    scanf("%d", &i);

    for (n = i; n >= 1; n--)
    {
        factorial = factorial * n;
    }
    printf("%d", factorial);
    return 0;
}
