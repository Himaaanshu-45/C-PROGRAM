#include <stdio.h>
int main()
{
float l,b,r,pr,ar,cc,ac;
    
printf("Enter the value of Length of Rectangle: \n");
    scanf("%f",&l);
    
printf("Enter the value of Breath of Reactangle: \n");
    scanf("%f",&b);
printf("Enter the value of Radius of Circle: \n");
scanf("%f",&r);
    
pr=2*(l+b);
    
ar=l*b;

cc=2*3.14*r;

ac=3.14*r*r;

    printf("\nperimeter of rectangle is: %f\n",pr);
    
    printf("area of rectangle is: %f\n",ar);
  
    printf("circumference of circle is: %f\n",cc);
    
    printf("area of circle is: %f\n",ac);
    
    return 0;
    }
