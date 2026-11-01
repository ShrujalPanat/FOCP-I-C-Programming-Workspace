//C program for employee salary calculation
#include <stdio.h>
int main()
{
    float salary, allowance, bonus;

    printf("the basic salary of employee:");
    scanf("%f", &salary);
    
    printf("the allowance of employee:");
    scanf("%f", &allowance);
    
    printf("the bonus of employee:");
    scanf("%f", &bonus);

    float final = salary + allowance + bonus;
    printf("final salary:%.2f\n", final);
    
 return 0;
}