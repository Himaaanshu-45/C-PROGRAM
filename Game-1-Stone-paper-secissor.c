#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int user,comp,choice;
    char *userChoice,*compChoice;
    srand(time(0));
    
    printf("====ROCK PAPER SECISSOR====\n");
    printf("1.Rock\n2.Paper\n3.secissor\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &user);
    comp = rand() % 3 + 1;
    switch(user)
        {

        case 1:
            
            userChoice="Rock";
        break;
        case 2:
            
            userChoice="Paper";
        break;
        case 3:
            
            userChoice="secissor";
        break;
            
          default:
        printf("Invalid choice!\n");
        return 0;
   }
    switch(comp)
        
        {
            case 1:
            compChoice="Rock";
            break;
            case 2:
            compChoice="Paper";
            break;
            case 3:
            compChoice="Secissor";
            break;
                
               }
    printf("You choose: %s\n",userChoice);
    printf("Computer Choose: %s\n", compChoice);
    if (user == comp)
    {
        printf("it's a Draw!\n");
        
    }
    else if ((user == 1 && comp == 3)||
            (user == 2 && comp == 1)||
            (user == 3 && comp == 2)
           
            )
    {
        printf("You win!\n");
    }
    else {
        printf("Computer Win!\n");   
    }
 }
f
