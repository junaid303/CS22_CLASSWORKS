/*
 Exit 0
 1 Extract left diagonal from the input square matrix
 2 Extracct right diagonal from the input square matrix
 3 Diagonal difference from the input square matrix
 4 diagonal matrix check
 5 Null Matrix Check
*/
#include<stdio.h>
int main()
{
    system("clear");
    int choice;
    char decision;
    while(1)
    {
        printf("WELCOME TO CLI\n ");
        printf("press 0 to Exit\n");
        printf("press 1 to get left diagonal\n");
        printf("press 2 for diagonal from the input square matrix\n");
        printf("press 3 for diagonal difference\n");
        printf("press 4 for diagonal matrix check\n");
        printf("press 5 for null matrix\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0:
            printf("i am exiting ...bye ...bye\n");
            exit(0);
            break;

            case 1:
            printf("Left diagonal block \n");
            break;

            case 2:
            printf("Right diagonal block\n");
            break;

            case 3:
            printf("Diagonal Difference Block\n");
            break;

            case 4:
            printf("Diagonal matrix block\n ");
            break;

            case 5:
            printf("Null matrix block\n");
            break;

            default:
            printf("Invalid input, try again\n");

        }printf("Do you want to continue : (Y/n)\n");
    scanf("%c",&decision);
    if(decision=='n'  || decision == 'N')
    {
       printf("bye.... bye.....");
    }
    }
    
    return 0;

}