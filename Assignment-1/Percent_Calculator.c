// C program for calculating total marks and percentage
#include <stdio.h>
int main()
{
    int first, second, third, fourth, fifth;

    printf("enter marks of first subject:");
    scanf("%d", &first);

    printf("enter marks of second subject:");
    scanf("%d", &second);

    printf("enter marks of third subject:");
    scanf("%d", &third);

    printf("enter marks of fourth subject:");
    scanf("%d", &fourth);

    printf("enter marks of fifth subject:");
    scanf("%d", &fifth);

    int total = first + second + third + fourth + fifth;
    printf("total marks:%d\n", total);

    float percentage = ((first + second + third + fourth + fifth) * 100) / 500;
    printf("percentage:%f\n", percentage);

 return 0;
}