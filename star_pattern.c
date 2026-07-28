#include<stdio.h>
void triangular_star_pattern()
{
    int a;
    printf("Enter the number of lines you want to print the pattern\n");
    scanf("%d",&a);
    for (int i = 0; i<=a; i++)
    {
        for(int j = 0; j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversed_triangular_star_pattern()
{
    int a;
    printf("Enter the number of lines you want to print the pattern\n");
    scanf("%d",&a);
    for(int i = a; i>=0; i--)
    {
        for (int j = 0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main(int argc,char *argv[])
{
    int a;
    printf("Press 1 to print Regular triangular star pattern\nPress 2 to print Reversed triangular star pattern\n");
    scanf("%d",&a);
    if (a == 1)
    {
        triangular_star_pattern();
    }
    else if (a == 2)
    {
        reversed_triangular_star_pattern();
    }
    else
    {
        printf("Please Enter the number from the options mentioned above");
    }
    return 0;
}