// C program to find if triangle is acute, obtuse, right
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b + c != 180)
        printf("I");
    else if (a < 90 && b < 90 && c < 90)
        printf("A");
    else if (a == 90 || b == 90 || c == 90)
        printf("R");
    else
        printf("O");

    return 0;
}