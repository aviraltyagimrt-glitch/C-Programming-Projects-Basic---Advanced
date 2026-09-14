#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    printf("Welcome to the User Management System\n");
    printf("Press 1 to Register a new user\n");
    printf("Press 2 to Login\n");
    printf("Press 3 to Exit\n");
    int choice;
    char username[50];
    char password[9];
    scanf(" %d", &choice);
    while (getchar() != '\n')
    {
        if (choice == 1)
        {
            do
            {
                printf("Before creating your new username kindly follow these instructions\nThe username must be of 8 characters\n");
                printf("Enter your new username :- \n");
                gets(username);
                printf("Username genertaed successfully\n");

            }while((strlen(username) < 0 || strlen(username) > 8));
            do
            {
                printf("Before you create your password , Kindly follow these instructions\nThe password must also be of 8 characters\n");
                printf("Create your password between 1 - 8 characters :- \n");

            }while((strlen(password) < 1 || strlen(password) > 8));
            gets(password);
            printf("User %s registered successfully with password %s \n", username, password);
        }
        return 0;
    }
}