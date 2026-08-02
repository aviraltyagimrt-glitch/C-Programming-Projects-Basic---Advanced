#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int emp;
    printf("Enter the number of Employees whose E_ID needs to be entered\n");
    scanf("%d", &emp);

    char **ids     = malloc(emp * sizeof(char *));  // one pointer slot per employee
    int   *lengths = malloc(emp * sizeof(int));      // remember each employee's ID length

    if (ids == NULL || lengths == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < emp; i++)
    {
        int length;
        printf("Enter the length of your employee ID for Employee No. %d:\n", i + 1);
        scanf("%d", &length);
        lengths[i] = length;

        // allocate fresh memory for THIS employee's ID (+1 for null terminator)
        ids[i] = calloc(length + 1, sizeof(char));
        if (ids[i] == NULL)
        {
            printf("Memory allocation failed for employee %d.\n", i + 1);
            return 1;
        }

        printf("Enter your Employee ID :\n");

        int actual_len = 0; // tracks how many characters were actually entered
        for (int j = 0; j < length; j++)
        {
            char c;
            scanf(" %c", &c);   // read the character first

            if (c == ' ')       // then decide whether to stop
            {
                break;
            }

            ids[i][j] = c;      // only store it if it wasn't a stop character
            actual_len++;
        }
        ids[i][actual_len] = '\0'; // properly terminate the string
    }

    printf("The Details of all %d employees are :\n", emp);
    for (int i = 0; i < emp; i++)
    {
        printf("E_ID of Employee %d is : %s\n", i + 1, ids[i]);
    }

    // free everything we allocated
    for (int i = 0; i < emp; i++)
    {
        free(ids[i]);
    }
    free(ids);
    free(lengths);

    return 0;
}