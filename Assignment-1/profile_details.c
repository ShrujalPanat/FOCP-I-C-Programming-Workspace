// C program to accept and display user details using scanf()
#include <stdio.h>
int main()
{
    int age;
    float height;
    char grade;
    
    printf("enter your age:");
    scanf("%d", &age);

    printf("enter your height(in meters):");
    scanf("%f", &height);

    printf("enter your grade:");
    scanf(" %c", &grade);

    printf("Age:%d\n", age);
    printf("Height(in meters):%f\n", height);
    printf("Grade:%c\n", grade);

 return 0;
}
