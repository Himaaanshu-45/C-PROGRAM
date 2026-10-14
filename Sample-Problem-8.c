//write a c program to check weather the number is less than 10 or not. 
#include <stdio.h>
int main ()
{
    int num,more,dic;
    printf("Enter your Total cost Price: \n");
    scanf("%d",&num);
    if(num>1000){
                   dic=num-(0.1*num);
                   printf("Due to Extra Discount Now you Pay:%d",dic);
                }
    else      {
            more=1000-num;
             printf("if you pay %d more you get extra discount upto 10 percent otherwise pay %d",more,num);
         }
         
    
   
    return 0;
}
