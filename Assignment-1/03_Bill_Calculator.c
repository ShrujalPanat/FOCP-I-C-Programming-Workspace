//C program for a simple bill calculation 
#include <stdio.h>
int main()
{
    float price, quantity, bill;
    printf("enter the price of item:");
    scanf("%f", &price);

    printf("enter the quantity of item:");
    scanf("%f", &quantity);

    bill = price * quantity;
    printf("total bill:%f\n", bill);

 return 0;
}
