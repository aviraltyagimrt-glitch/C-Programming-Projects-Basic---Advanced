#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char username[50];
char password[50];
char Username()
{
    printf("Create your username\n");
    fgets(username,sizeof(username),stdin);
    username[strcspn(username,"\n")] = '\0';
    if(strlen(username)  <  0 || strlen(username) > 8)
    {
        printf("Sorry your username cannot be generated because the length of the username must be of 8 characters only\n");
        return 0;
    }
    else
    {
        printf("Congratulations your username is generated successfully\n");
        printf("Now Create an Password\n");
        fgets(password,sizeof(password),stdin);
        password[strcspn(password,"\n")] = '\0';
        if(strlen(password) < 0 || strlen(password) > 8)
        {
        
            printf("Sorry the length of the password must be of 8 characters only\n");
            return 0;

        }
        
        else
        {
            printf("Congratulations your password is created successfully\n");
            return 0;
        }
        

    }
}

void Login()
{
    char usernameforlogin[50];
    char passwordforlogin[50];
    printf("Enter your Username\n");
    fgets(usernameforlogin,sizeof(usernameforlogin),stdin);
    usernameforlogin[strcspn(usernameforlogin,"\n")] = '\0';
    if(strcmp(usernameforlogin,username) == 0)
    {
        printf("Now enter your password\n");
        fgets(passwordforlogin,sizeof(passwordforlogin),stdin);
        passwordforlogin[strcspn(passwordforlogin,"\n")] = '\0';
        if(strcmp(passwordforlogin,password) == 0)
        {
            printf("Congratulations you logged in successfully\n");
        }
        else
        {
            printf("Sorry your entered password is incorrect\n");
        }
    }
    else
    {
        printf("Sorry your entered username is incorrect\n");
    }
}
int main (int argc,char *argv[])
{
    while(true)
    {
        printf("Welcome to the user management system\n");
        printf("Press 1 to Create an Username\n");
        printf("Press 2 to Login\n");
        printf("Press 3 to Exit\n");
        int choice;
        printf("Enter the number according to your choice\n");
        scanf("%d",&choice);
        while(getchar() != '\n');
        switch(choice)
        {
            case 1:
                Username();
                break;
            case 2:
                Login();
                break;
            case 3:
                printf("Congratulations you exited successfully\n");
                printf("Thank you for using the program developed by Aviral Tyagi\n");
                return 0;
            default:
                printf("Kindly choose an option from the numbers mentioned above\n");
        }

    }
    return 0;
}