#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int BAR_LENGTH = 80;
void print_bar(int id, int progress)
{
     
    int bars_to_show = progress * BAR_LENGTH / 100;
    printf("Task %d = [",id);
    for(int i = 0;i<BAR_LENGTH;i++)
    {
        if(i < bars_to_show)
        {
            printf("=");
        }
        else
        {
            printf(" ");
        }
    }
    printf("] %d %%",progress);
}

int main(int argc,char *argv[])
{
    print_bar(1,80);
    printf("\n");
    print_bar(2,100);
    printf("\n");
    print_bar(3,85);
    return 0;
}
