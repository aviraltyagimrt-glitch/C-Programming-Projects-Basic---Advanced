#include <stdio.h>
#include <string.h>
typedef struct Travel_Agency_Manager
{
    char name[50];
    int License_Number;
    char Route[50];
    int kms;

} TAM;
int main(int argc,char *argv[])
{
    TAM d1[100];
    int z;
    printf("Enter the number of driver whom details you want to store ?\n");
    scanf("%d",&z);
    while (getchar() != '\n');
    char a[56];
    char b[56];
    int c;
    int d;
    for(int i = 1; i<(z+1);i++)
    {
        printf("Enter the details of Driver no. %d\n",i);
        printf("Enter the Name of the driver\n");
        fgets(a, sizeof(a), stdin);
        a[strcspn(a, "\n")] = '\0';   // strip trailing newline fgets keeps

        printf("Enter your License Number\n");
        scanf("%d", &c);
        while (getchar() != '\n');   // flush leftover newline left by scanf

        printf("Enter your Route\n");
        fgets(b, sizeof(b), stdin);
        b[strcspn(b, "\n")] = '\0';

        printf("Enter your Kilometres driven ?\n");
        scanf("%d", &d);
        while (getchar() != '\n');   // flush again before next fgets
        printf("\n");
        strcpy(d1[i].name,a);
        d1[i].License_Number = c;
        strcpy(d1[i].Route,b);
        d1[i].kms = d;
        
    } 
    printf("The final details of %d Drivers are\n",z);
    for(int i = 1;i<=z;i++)
    {
        printf("\nThe details of Driver No. %d are as follows\n",i);
        printf("Name :- %s\n",d1[i].name);
        printf("License Number :- %d\n",d1[i].License_Number);
        printf("Route :- %s\n",d1[i].Route);
        printf("Kilometres Driven :- %d\n",d1[i].kms);
    }
    return 0;
}