// C program to classify the character
#include <stdio.h>
int main()
{
    char ch;
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' ||
        ch == 'O' || ch == 'U')
        printf("V");
    else if (ch >= '0' && ch <= '9')
        printf("D");
    else if ((ch >= 'a' && ch <= 'z') ||
             (ch >= 'A' && ch <= 'Z'))
        printf("C");
    else
        printf("S");

    return 0;
}