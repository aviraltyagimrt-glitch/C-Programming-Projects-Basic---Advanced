#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(int argc, char *argv[])
{
    while (true)
    {
        printf("Press 1 to Register\n");
        printf("Press 2 to Login\n");
        printf("Press 3 to Exit\n");
        int choice;
        printf("Enter the option you want to choose\n");
        scanf("%d", &choice);
        char username[100];
        char en_username[100];
        switch (choice)
        {
        case 1:
        top:
            printf("Create your username\n");
            scanf("%s", &username);
            if (strlen(username) < 1 || strlen(username) > 8)
            {
                printf("Please make sure that the length of the username shoukd be between 1-8 characters\n");
                // return 0;
                goto top;
            }
            FILE *g = NULL;
            g = fopen("username.txt", "w");
            fprintf(g, "%s", username);
            fclose(g);
            char password[100];
            printf("Create your password\n");
            scanf("%s", &password);
            if (strlen(password) < 1 || strlen(password) > 8)
            {
                printf("Please make sure that the length of the password must be between 1-8 characters\n");
                // return 0;
            }
            FILE *g2 = NULL;
            g2 = fopen("password.txt", "w");
            fprintf(g2, "%s", password);
            fclose(g2);
            break;
        case 2:
            printf("Enter your username\n");
            scanf("%s", &en_username);
            FILE *a2 = NULL;
            a2 = fopen("username.txt", "r");
            fscanf(a2, "%s", username);
            if (strcmp(en_username, username) == 0)
            {
                char en_password[100];
                printf("Now Enter your passowrd\n");
                scanf("%s", &en_password);
                FILE *a3 = NULL;
                a3 = fopen("password.txt", "r");
                fscanf(a3, "%s", password);
                if (strcmp(password, en_password) == 0)
                {
                    printf("Congratulations you successfully logged in\n");
                    // return 0;
                }
                else
                {
                    printf("Sorry your entered password is incorrect\n");
                    // return 0;
                }
            }
            else
            {
                printf("Sorry your entered username is incorrect\n");
                // return 0;
            }
            break;
        case 3:
            printf("Thank you for using the program\nDeveloped by Aviral Tyagi");
            return 0;
            break;
        default:
            printf("Kindly choose the option from the one mentioned below\n");
            break;
        }
            
    }
}