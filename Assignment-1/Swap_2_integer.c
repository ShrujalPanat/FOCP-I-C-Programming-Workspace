//C program for swapping the value of two integers using a third variable
#include <stdio.h>
int main()
{
    int  a, b, var;
    printf("enter the first number:");
    scanf("%d", &a);

    printf("enter the second number:");
    scanf("%d", &b);
    
    printf("before swapping: %d %d\n", a, b);

    var = a;
    a = b;
    b = var;

    printf("after swapping: %d %d\n", a, b);

 return 0;
}