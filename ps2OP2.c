
#include <stdio.h>

float to_fahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}

int main()
{
    float c, f;

    printf("Enter Celsius: ");
    scanf("%f", &c);

    f = to_fahrenheit(c);

    printf("Fahrenheit = %.2f\n", f);

    return 0;
}
