// C program for calculating the sum of squares
#include <stdio.h>
int main()
{
    int square, i, n;
    square = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        square = square + i * i;
    }
    printf("%d", square);
    return 0;
}