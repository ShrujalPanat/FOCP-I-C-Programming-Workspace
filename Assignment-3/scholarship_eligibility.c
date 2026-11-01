// C program to check if student is eligible for scholarship
#include <stdio.h>
int main()
{
    int marks, attendance;
    scanf("%d %d", &marks, &attendance);

    if (marks >= 90 && attendance >= 70)
        printf("S");
    else if (marks >= 75 && attendance >= 75)
        printf("E");
    else
        printf("N");
    return 0;
}