#include <stdio.h>

int main()
{
    float f, c;

    printf("Enter the Value of Temperature in Degree Fahrenheit: ");
    scanf("%f", &f);

    c = (5.0 / 9.0) * (f - 32);

    printf("The Value of Temperature in Degree Celsius = %f", c);

    return 0;
}
