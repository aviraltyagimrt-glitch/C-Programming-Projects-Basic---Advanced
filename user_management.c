#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char function1()
{
    char *username;
    username = (char *)malloc(50 * sizeof(char));
    printf("Enter your username: -  ");
    scanf("%s", username);
    if (strlen(username) < 1 || strlen(username) > 8)
    {
        printf("Username must be at least 8 characters long.\n");
        free(username);
        return 0;
    }
    printf("Your username is %s\n", username);
    free(username);
    printf("Now create a password for this username : - ");
    char *password = (char *)malloc(50 * sizeof(char));
    scanf("%s", password);
    if (strlen(password) < 0 || strlen(password) > 8)
    {
        printf("Password length must be of 8 characters only\n");
        free(password);
        return 0;
    }
}
int main(int argc, char *argv[])
{
    while(true)
    {
        
    }
    printf("Welcome to the User Management System\n");
    printf("Press 1 to Register a new user\n");
    printf("Press 2 to Login\n");
    printf("Press 3 to Exit\n");
    int choice;
    scanf("%d", &choice);
    char entered_username[50];
    // if (choice == 1)
    // {
    //     username = (char *)malloc(50 * sizeof(char));
    //     printf("Enter your username: -  ");
    //     scanf("%s", username);
    //     if (strlen(username) < 1 || strlen(username) > 8)
    //     {
    //         printf("Username must be at least 8 characters long.\n");
    //         free(username);
    //         return 0;
    //     }
    //     printf("Your username is %s\n", username);
    //     free(username);
    //     printf("Now create a password for this username : - ");
    //     char *password = (char *)malloc(50 * sizeof(char));
    //     scanf("%s", password);
    //     if (strlen(password) < 0 || strlen(password) > 8)
    //     {
    //         printf("Password length must be of 8 characters only\n");
    //         free(password);
    //         return 0;
    //     }
    // }
    else if (choice == 2)
    {
        printf("Enter your username: -  ");
        scanf("%s", entered_username);
        if (strlen(entered_username) < 1 || strlen(entered_username) > 8)
        {
            printf("Kindly Enter the username of the length generated\n");
            return 0;
        }
        else if (entered_username == username)
        {
            printf("You logged in successfully\n");
            return 1;
        }
    }
    else if (choice == 3)
    {
        printf("You successfully exited the program developed by Aviral Tyagi\n");
    }
    else
    {
        printf("Invalid choice. Please try again.\n");
        return 0;
    }
    return 0;
}