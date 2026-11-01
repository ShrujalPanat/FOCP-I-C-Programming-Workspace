// C program to store and display the student information
#include <stdio.h>
int main()
{
    char id[10];
    int age;
    float percentage;
    char grade;
    printf("enter your student id:");
    scanf("%s", id);

    printf("enter your age:");
    scanf("%d", &age);

    printf("enter your percentage:");
    scanf("%f", &percentage);

    printf("enter your grade:");
    scanf(" %c", &grade);

    printf("Student ID:%s\n", id);
    printf("Age:%d\n", age);
    printf("Percentage:%f\n", percentage);
    printf("Grade:%c\n", grade);

  return 0;
}
