#include <stdio.h>

int main() {
    int number;
    float celsius;

    printf("Input Temp: ");

    scanf("%d", &number);

    celsius = (number - 32) * 5.0 / 9.0;

    printf("Converted that is: %.2f\n", celsius);

    return 0;
}
