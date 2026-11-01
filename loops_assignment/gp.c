// C program for calculating Gp series
#include <stdio.h>
int main()
{
    int a, r, n;
    long long sum = 0, term;
    scanf("%d %d %d", &a, &r, &n);
    term = a;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + term;
        term = term * r;
    }
    printf("%lld", sum);
    return 0;
}