#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main(int argc,char *argv[])
{
    printf("Before using this calculator kindly keep in mind to copy the below statement before passing any argument\nCommand_Line_Calculator.exe and then press Tab key\n");
        if(strcmp(argv[1], "add") == 0)
        {
            printf("Result: %.2f\n", atof(argv[2]) + atof(argv[3]));
        }
        else if (strcmp(argv[1], "subtract") == 0)
        {
            printf("Result: %.2f\n", atof(argv[2]) - atof(argv[3]));
        }
        else if (strcmp(argv[1], "multiply") == 0)
        {
            printf("Result: %.2f\n", atof(argv[2]) * atof(argv[3]));
        }
        else if (strcmp(argv[1], "divide") == 0)
        {
            printf("Result: %.2f\n", atof(argv[2]) / atof(argv[3]));
        }
        else if (strcmp(argv[1], "modulus") == 0)
        {
            printf("Result: %d\n", (int)atof(argv[2]) % (int)atof(argv[3]));
        }
        else 
        {
            printf("Your typed argument or format is wrong\n");
            printf("Argument: %s\n",argv[1]);
        }
    return 0;
}