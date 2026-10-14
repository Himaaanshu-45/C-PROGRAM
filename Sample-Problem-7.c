//write a c program to check weather the number is less than 10 or not. 
#include <stdio.h>
int main ()
{
    int num,more,dic;
    printf("Enter your Total cost Price: \n");
    scanf("%d",&num);
    if(num>1000){
        dic=num-(0.1*num);
    printf("Due to Extra Discount Now you Pay:%d",dic);}
     else{
     printf("you pay:%d",num);
         }
         
    
   
    return 0;
}
