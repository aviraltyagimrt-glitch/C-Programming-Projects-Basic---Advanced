#include <stdio.h>
float kmstomiles()
{
    float a;
    printf("\nEnter the value in Kms\n");
    scanf("%f", &a);
    printf("The value in miles is %.2f miles\n\n", a / 1.609);
    return 0;
}
float inchestofoot()
{
    float a;
    printf("\nEnter the value in Inches\n");
    scanf("%f", &a);
    printf("The value in foot is %.2f foot\n\n", a / 12);
    return 0;
}
float cmstoinches()
{
    float a;
    printf("\nEnter the value in cm\n");
    scanf("%f", &a);
    printf("The value in inches is %.2f inches\n\n", a / 2.54);
    return 0;
}
float poundstokgs()
{
    float a;
    printf("\nEnter the value in Pounds\n");
    scanf("%f", &a);
    printf("The value in Kgs is %.2f kgs\n\n", a / 2.205);
    return 0;
}
float cmstometre()
{
    float a;
    printf("\nEnter the value in Cms\n");
    scanf("%f", &a);
    printf("The value in metres is %.2f m\n\n", a / 100);
    return 0;
}
float inchestometres()
{
    float a;
    printf("\nEnter the value in inches\n");
    scanf("%f", &a);
    printf("The value in metres is %.2f metres\n\n", a / 39.37);
    return 0;
}
float mtomm()
{
    float a;
    printf("\nEnter the value in m\n");
    scanf("%f", &a);
    printf("The value in mm is %.2f mm\n\n", a * 1000);
    return 0;
}
float ltoml()
{
    float a;
    printf("\nEnter the value in Litres\n");
    scanf("%f", &a);
    printf("The value in mili Litres is %.2f ml\n\n", a * 1000);
    return 0;
}
int main(int argc, char *argv[])
{
    printf("Welcome to the conversion calculator\n");
    while (1)
    {
        int a;
        printf("Press 1 if you want to convert Kilometres to Miles\n");
        printf("Press 2 if you want to convert inches to foot\n");
        printf("Press 3 if you want to convert Centimetres to Inches\n");
        printf("Press 4 if you want to convert Pounds to Kilograms\n");
        printf("Press 5 if you want to convert Centimetres to Metres\n");
        printf("Press 6 if you want to convert Inches to Metres\n");
        printf("Press 7 if you want to convert Metre to milimetre\n");
        printf("Press 8 if you want to convert Litres to mililitres\n");
        printf("Kindly Press 0 to exit the calculator\n");
        scanf("%d",&a);
        if(a == 1)
        {
            kmstomiles();
            continue;
        }
        else if(a == 2)
        {
            inchestofoot();
            continue;
        }
        else if(a == 3)
        {
            cmstoinches();
            continue;
        }
        else if(a == 4)
        {
            poundstokgs();
            continue;
        }
        else if(a == 5)
        {
            cmstometre();
            continue;

        }
        else if(a == 6)
        {
            inchestometres();
            continue;
        }
        else if(a == 7)
        {
            mtomm();
            continue;
        }
        else if(a == 8){
            ltoml();
            continue;
        }
        else if(a == 0)
        {
            printf("\nThank you for using the conversion calculator\n");
            printf("Developed by Aviral Tyagi\n");
            break;
        }

    }
    return 0;
}
