#include <stdio.h>

int main()
{
    int length = 1189;
    int breadth = 841;
    int i;

    for (i = 0; i <= 8; i++)
    {
        printf("A%d = %d mm x %d mm\n", i, length, breadth);

        int temp = length / 2;
        length = breadth;
        breadth = temp;
    }

    return 0;
}
