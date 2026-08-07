#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[])
{
    char str[100];
    printf("Enter the string which you want to check the palindrome of \n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    char g[100];
    strcpy(g, str);
    strrev(g);
    if(strcmp(str, g) == 0)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}