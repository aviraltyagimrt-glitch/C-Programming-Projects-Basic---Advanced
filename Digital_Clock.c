#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
void fill_time(char*);
void fill_time2(char*);
void fill_date(char*);
void fill_time(char *timestring)
{
    time_t raw_time;
    time(&raw_time);
    struct tm *current_time;
    current_time = localtime(&raw_time);
    strftime(timestring, 50, "%I:%M:%S %p", current_time); // I is used for 12 hour Format .
}

void fill_time2(char *timestring)
{
    time_t raw_time;
    time(&raw_time);
    struct tm *current_time;
    current_time = localtime(&raw_time);
    strftime(timestring, 50, "%H:%M:%S %p", current_time); // H is used for 24 Hours Format .
}

void fill_date(char *datestring)
{
    time_t raw_time;
    time(&raw_time);
    struct tm *current_date;
    current_date = localtime(&raw_time);
    strftime(datestring, 50, "%A %B %d %Y\n", current_date);
}
void clear_screen(){
    printf("\033[H\033[J"); // \033 (Escape character that starts an ANSI escape sequence) [H moves the cursor to the "home" position (top-left, row 1 col 1)
                            // [J — clears from the cursor to the end of the screen
    fflush(stdout);

    // #ifdef _WIN32
    //     system("cls");
    // #else
    //     system("clear");
    // #endif
}
int main(int argc,char *argv[])
{
    char time[50];
    char date[50];
    int z;
    printf("\nPress 1 to choose the time in 12 hour format\n");
    printf("\nPress 2 to choose the time in 24 hour format\n");
    printf("\nEnter the Number according to your choice\n");
    scanf("%d",&z);
    if (z == 1)
    {
       while(1)
       {
       fill_time(time);
       fill_date(date);
       clear_screen();
       printf("Current time is : %s\n",time);
       printf("Date : %s",date);
       fflush(stdout);
       sleep(1); // Make the program sleep/Pause for 1 second .
       continue;
       }
    
        // int z2;
        // printf("\nPress 1 to continue and 0 to exit\n");
        // scanf("%d",&z2);
        // if(z2 == 1)
        // {
        //     continue;
        // }
        // else if(z2 == 0)
        // {
        //     printf("\nThanks for using the Digital Clock\nDeveloped by Aviral Tyagi !!");
        //     break;
        // }
        // else 
        // {
        //     printf("\nPress either 1 or 0\n");
        //     continue;
        // }
    }
    
    else if (z == 2)
    {
    while(1)
    {
    
        fill_time2(time);
        fill_date(date);
        clear_screen();
        printf("Current time is : %s\n",time);
        printf("Date : %s",date);
        fflush(stdout);
        sleep(1);
        continue;
    }
    
        // int z2;
        // printf("\nPress 1 to continue and 0 to exit\n");
        // scanf("%d",&z2);
        // if(z2 == 1)
        // {
        //     continue;
        // }
        // else if(z2 == 0)
        // {
        //     printf("\nThanks for using the Digital Clock\nDeveloped by Aviral Tyagi !!");
        //     break;
        // }
        // else 
        // {
        //     printf("\nPress either 1 or 0\n");
        //     continue;
        // }
    }         
    else
    {
        printf("\nEnter the number from the options mentioned above\n");
    }
    return 0;
}


