#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int accounts;
int PIN;
int current_balance = 0;
int total_balance = 0;

void Money_Deposit()
{
    int accountforbalance;
    int PINforbalance;
    int amountfordeposit;
    printf("Before proceeding with the amount deposition kindly enter your account number\n");
    scanf("%d",&accountforbalance);
    if(accountforbalance == accounts)
    {
        printf("Now Enter your 4 digit ATM PIN\n");
        scanf("%d",&PINforbalance);
        if(PINforbalance == PIN)
        {
            printf("Congratultions you successfully logged in into your account\n");
            printf("Now Kindly Enter the amount you want to deposit\n");
            scanf("%d",&amountfordeposit);
            current_balance = current_balance + accountforbalance;
            printf("Amount Added Successfully\n");
        }
        else
        {
            printf("Sorry your Entered PIN is incorrect\n");
            printf("Please try again\n");
        }
    }
    else
    {
        printf("Sorry your entered account number is incorrect\n");
        printf("Kindly Please try again\n");
    }
    
    
}
void Check_Balance()
{
    int account_number;
    int PIN_for_balance;
    printf("Enter your account number to check your balance\n");
    scanf("%d",&account_number);
    if(account_number == accounts)
    {
        printf("Now Enter your PIN to check your balance\n");
        scanf("%d",&PIN_for_balance);
        if(PIN_for_balance == PIN)
        {
            printf("Your Current Balance is %d\n",current_balance);

        }
        else
        {
            printf("Sorry Your Entered Pin is incorrect\n");
        }

        
    }
    else
    {
        printf("Sorry Your entered Account number is incorrect\n");
    }
    
}

void Money_Withdrawl()
{
    int accountforwithdrawl;
    int PINforwithdrawl;
    printf("Kindly Enter your Account Number\n");
    scanf("%d",&accountforwithdrawl);
    if(accountforwithdrawl == accounts)
    {
        printf("Kindly Enter your PIN\n");
        scanf("%d",&PINforwithdrawl);
        if(PINforwithdrawl == PIN)
        {
            printf("You successfully logged in into your account\n");
            scanf("%d",&PINforwithdrawl);
        }
        else
        {
            printf("Sorry your entered PIN is incorrect\n");
            printf("Please try again\n");
        }
    }
    else
    {
        printf("Sorry your Entered account number is incorrect\n");
        printf("Please try again\n");
    }
}

void Account_Creation()
{
    char name[50];
    int Date;
    char Month[10];
    int Year;
    int contact_number;
    char address[100];
    printf("Kindly Enter your Name\n");
    fgets(name,sizeof(name),stdin);
    printf("Enter Only your Date of Birth\n");
    scanf("%d",&Date);
    if(len(Date) < 0 || len(Date) > 2)
    {
        printf("Sorry the length of date of birth must be 2 digits Only\n");
    }
    printf("Now Enter the month in which you were born\n");
    scanf("%s",&Month);
    if(strlen(Month) < 0 || strlen(Month) > 10)
    {
        printf("Sorry the Month name must contain upto 10 characters Only\n");
    }
    printf("Now Enter the year in which you were born\n");
    scanf("%d",&Year);
    if(len(Year)< 0 || len(Year) > 4)
    {
        printf("Sorry the length of the Year must be 4 digits only\n");
    }
    printf("Enter your 10 digit Mobile Number\n");
    scanf("%d",&contact_number);
    if(len(contact_number) < 0 || len(contact_number) > 10)
    {
        printf("Sorry the length of the contact number must be of 10 digits only\n");
    }
    printf("Kindly Enter your Address\n");
    fgets(address,sizeof(address),stdin);
    printf("Congratulations Your Information is created Successfully\n");
    printf("Your Current Information is Name :- %s\nDOB :- %d - %s - %d\nContact Number :- %d\n Address :- %s\n",name,Date,Month,Year,contact_number,address);
    printf("Now Kindly Create your Account Number\n");
    scanf("%d",&accounts);
    // Condition to check whether the account number is available or not
    printf("Now Create a 4 digit Login PIN\n");
    scanf("%d",&PIN);
    if(strlen(PIN) < 0 || strlen(PIN) > 4)
    {
        printf("The PIN Cannot be created because the PIN must be of 4 Digita Only\n");
        printf("Pease try again\n");
    }
    else
    {
        printf("Congratulations the PIN is created successfully\n");
    }
    printf("Your Account Number is %d\n",accounts);
    printf("Your PIN generated is %d\n",PIN);



}

int main(int argc, char const *argv[]) 
{
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
                Account_Creation();
                break;
            case 2:
                Check_Balance();
                break;
            case 3:
                Money_Deposit();
                break;
            case 4:
                Money_Withdrawl();
                break;
            case 5:
                printf("Thank you for successfully using our Banking System\n");
                printf("You exited successfully\n");
                break;
        }
        break;
    }

    return 0;
}