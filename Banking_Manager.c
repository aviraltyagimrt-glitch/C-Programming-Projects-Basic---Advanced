#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc, char const *argv[]) 
{
    int total_balance = 0;
    int ogaccnumber = 1234;
    int ogPIN = 12;
    int accounts[10];
    for(int i = 0;i<10;i++)
    {
        printf("Create the account number for the customer number %d\n",i+1);
        scanf("%d",&accounts[i]);
    }
    for(int i = 0;i<10;i++)
    {
        printf("The account number of user number %d is %d\n",i+1,accounts[i]);
    }
    while(true)
    {
        printf("Welcome to the Bank Managing System\n");
        printf("Press 1 to Create an Account\n");
        printf("Press 2 to Check balance in your Account\n");
        printf("Press 3 to Deposit Money\n");
        printf("Press 4 to Withdraw Money\n");
        printf("Press 5 to Exit\n");
        int choice;
        printf("Press the number according to your need\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:

            case 2:
                printf("Enter your account number\n");
                int accnumber;
                scanf("%d",&accnumber);
                for(int j = 0;j<10;j++)
                {
                    if(accnumber == accounts[j])
                    {
                        printf("Kindly Enter your PIN\n");
                        int PIN;
                        scanf("%d",&PIN);
                        if(PIN == ogPIN)
                        {
                            printf("Your Current Balance is :- %d rupees\n",total_balance);
                            break;
                        }
                        else
                        {
                            printf("Sorry Your entered PIN is incorrect\n");
                            break;
                        }
                    }
                    else
                    {
                        printf("Sorry this account number doesn't exist !!\n");
                        break;
                    }
                }
            case 3:

            case 4:

            case 5:
                printf("Thank you for successfully using our Banking System\n");
                printf("You exited successfully\n");
                break;
        }
        break;
    }

    return 0;
}