#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int choice,a;
    for(;;)
    {
    printf("\nWelcome to XYZ restaurant\n");
    printf("\nEnter your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Food item-Pizza\n Price-239");
                break;

        case 2: printf("Food item-Burger\n Price-129");
                break;
            
        case 3: printf("Food item-Pasta\n Price-179");
                break;

        case 4: printf("Food item-French fries\n Price-99");
                break;

        case 5: printf("Food item-Sandwich\n Price-149");
                break;

       default: printf("\nError! Option not on the menu");
    }

    printf("\nDo you want to change ?\n");
    printf("For yes press 1 and for no press 0\n");
    scanf("%d",&a);
    if(a==1)
    {
    printf("\nWelcome to XYZ restaurant\n");
    printf("\nEnter your Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Food item-Pizza\n Price-239");
                break;

        case 2: printf("Food item-Burger\n Price-129");
                break;
            
        case 3: printf("Food item-Pasta\n Price-179");
                break;

        case 4: printf("Food item-French fries\n Price-99");
                break;

        case 5: printf("Food item-Sandwich\n Price-149");
                break;

       default: printf("Error! Option not on the menu");
    }
    }
    else
    exit(0);
    }
    
}
