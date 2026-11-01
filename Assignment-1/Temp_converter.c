//C program for temperature conversion from celcius to fahrenheit
#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    
    printf("enter temperature in celsius:");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("temperature in fahrenheit:%fF\n", fahrenheit);

 return 0;
}