// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5,sum;
    float percentage;
    printf("Enter the marks of the Subject 1: ");
        scanf("%d",&m1);
    printf("Enter the marks of the Subject 2: ");
        scanf("%d",&m2);
    printf("Enter the marks of the Subject 3: ");
        scanf("%d",&m3);
    printf("Enter the marks of the Subject 4: ");
        scanf("%d",&m4);
    printf("Enter the marks of the Subject 5: ");
        scanf("%d",&m5);
    sum=m1+m2+m3+m4+m5;
    printf("Total marks: %d\n",sum);
    percentage=sum/5.0;
    printf("Percentage: %.2f%%",percentage);
    
return 0;
}
    
