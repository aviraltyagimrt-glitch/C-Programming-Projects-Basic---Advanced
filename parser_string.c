#include <stdio.h>
#include <string.h>

void parser(char *ptr)
{
    // printf("Currently the item inside string is\n%s\n", ptr);
    int x = 0;
    int z = 0;
    for (int i = 0; i < strlen(ptr); i++)
    {
        if (ptr[i] == '<')
        {
            x = 1;
            continue;
        }
        else if (ptr[i] == '>')
        {
            x = 0;
            continue;
        }
        if (x == 0)
        {
            ptr[z] = ptr[i];
            z++;
        }
    }
    ptr[z] = '\0';
    while (ptr[0] == ' ')
    {
        for (int i = 0; i < strlen(ptr); i++)
        {
            ptr[i] = ptr[i + 1];
        }
    }
    while (ptr[strlen(ptr) - 1] == ' ')
    {
        ptr[strlen(ptr) - 1] = '\0';
    }
}
int main(int argc, char *argv[])
{
    char try[] = "<h1>     This is an example of parser string     <h2>";
    // puts(try);
    char *g = try;
    parser(g);
    /* parser returns void; can't use it as an expression. Print the string instead. */
    printf("%s\n", g);
    return 0;
}