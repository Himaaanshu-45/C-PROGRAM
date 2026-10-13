#include <stdio.h>
#include <math.h>

int main() 
{
int n,reverse;
    printf("Enter a 5 Digit Number: ");
        scanf("%d",&n);
          reverse=(n%10)*10000
              +((n/10)%10)*1000
              +((n/100)%10)*100
              +((n/1000)%10)*10
              +(n/10000);
    printf("Reverse number= %d",reverse);

    return 0;
        }
