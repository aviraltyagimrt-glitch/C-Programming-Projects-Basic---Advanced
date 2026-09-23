#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char username[50];
char password[50];
char Username()
{
    printf("Create your username\n");
    fgets(username,sizeof(username),stdin);
    // scanf("%s",&username);
    while(getchar() != '\0')
    // getchar();
    {
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
            while(getchar() != '\0')
            {
                if(strlen(password) < 0 || strlen(password) > 8)
                {
                    printf("Sorry the length of the password must be of 8 characters only\n");
                    return 0;

                }
                else
                {
                    printf("Congratulations your password created successfully\n");
                    return 0;
                }
            }

        }
    }
}
void Login()
{

}
int main (int argc,char *argv[])
{
    printf("Welcome to the user management system\n");
    printf("Press 1 to Create an Username\n");
    printf("Press 2 to Login\n");
    printf("Press 3 to Exit\n");
    int choice;
    printf("Enter the number according to your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            Username();
            break;
        case 2:
            break;
        case 3:
            break;
        default:
            printf("Kindly choose an option from the numbers mentioned above\n");
    }
    return 0;
}