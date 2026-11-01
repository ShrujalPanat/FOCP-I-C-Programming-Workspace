// C program for calculating industry-style invoice calculator
#include <stdio.h>
int main()
{
    int id, price, quantity, percent;

    printf("enter the product id:");
    scanf("%d", &id);

    printf("enter the product price:");
    scanf("%d", &price);

    printf("enter the product quantity:");
    scanf("%d", &quantity);

    printf("enter the discount percentage:");
    scanf("%d", &percent);

    printf("Product ID:%d\n", id);

    int subtotal = price * quantity;
    printf("subtotal:%d\n", subtotal);

    int discount = subtotal * percent / 100;
    printf("Discount Amount:%d\n", discount);

    int final = subtotal - discount;
    printf("Final Payable Amount:%d\n", final);

 return 0;
}