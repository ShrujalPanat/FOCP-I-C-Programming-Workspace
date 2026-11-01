// Calculate the average of three integers.
#include <stdio.h>

int main(void)
{
    int first, second, third;

    printf("Enter three integers: ");
    if (scanf("%d %d %d", &first, &second, &third) != 3) {
        fprintf(stderr, "Invalid input. Please enter three integers.\n");
        return 1;
    }

    // Convert to float before division to preserve fractional averages.
    float average = ((float)first + second + third) / 3.0f;
    printf("Average = %.2f\n", average);

    return 0;
}
