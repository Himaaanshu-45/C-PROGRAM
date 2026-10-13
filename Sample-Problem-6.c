#include <stdio.h>

int main()
{
    int n, notes = 0;

    printf("Enter amount: ");
    scanf("%d", &n);

    notes = notes + n / 100;
    n = n % 100;

    notes = notes + n / 50;
    n = n % 50;

    notes = notes + n / 10;
    n = n % 10;

    notes = notes + n / 5;
    n = n % 5;

    notes = notes + n / 2;
    n = n % 2;

    notes = notes + n / 1;

    printf("Minimum number of notes = %d", notes);

    return 0;
}
