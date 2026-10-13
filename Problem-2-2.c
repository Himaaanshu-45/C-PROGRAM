#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r, phi;

    printf("Enter x and y coordinates: ");
    scanf("%f %f", &x, &y);

    r = sqrt(x * x + y * y);
    phi = atan(y / x);

    printf("Polar coordinates are:\n");
    printf("r = %f\n", r);
    printf("phi = %f radians\n", phi);

    return 0;
}
