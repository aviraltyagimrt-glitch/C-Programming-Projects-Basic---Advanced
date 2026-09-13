#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
const int BAR_LENGTH = 50;
const int MAX_TASK = 8;
typedef struct
{
    int id;
    int progress;
    int step;
}task;
void print_bar(task t);
void clear_screen();
void clear_screen()
{
    printf("\033[H\033[J");
}
void print_bar(task t)
{
    int bars_to_show = t.progress * BAR_LENGTH / 100;
    printf("Task %d = [",t.id);
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
    printf("] %d %%",t.progress);
    printf("\n");
}

int main(int argc,char *argv[])
{
    task t[MAX_TASK];
    srand(time(NULL));
    for(int i = 0;i<MAX_TASK;i++)
    {
        t[i].id = i+1;
        t[i].progress = 0;
        t[i].step = rand() % 8 + 1; // Random step between 1 and 8
    }
    int task_incomplete = 1;
    while(task_incomplete)
    {
        task_incomplete = 0;
        clear_screen();
        for(int i = 0;i<MAX_TASK;i++)
        {
            if(t[i].progress < 100)
            {
                t[i].progress += t[i].step;
                if(t[i].progress > 100)
                {
                    t[i].progress = 100;
                }
            }
            print_bar(t[i]);
            if(t[i].progress < 100)
            {
                task_incomplete = 1;
            }
        }
        sleep(1);
    }
    printf("All tasks completed!\n");
    return 0;
}
