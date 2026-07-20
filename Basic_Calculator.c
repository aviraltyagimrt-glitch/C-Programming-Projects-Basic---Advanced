#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void add(){
    float a1 , b1 , c1;
    printf("Enter the First Value\n");
    scanf("%f",&a1);
    printf("Enter the Second Value\n");
    scanf("%f",&b1);
    c1 = a1 + b1;
    printf("The Sum of %.2f and %.2f is %.2f\n\n", a1 , b1 , c1);
    
}
void subtract(){
    float a1 , b1 , c1;
    printf("Enter the First Value\n");
    scanf("%f",&a1);
    printf("Enter the Second Value\n");
    scanf("%f",&b1);
    c1 = a1 - b1;
    printf("The Subtraction of %.2f and %.2f is %.2f\n\n", a1 , b1 , c1);
}
void multiply(){
    float a1 , b1 , c1;
    printf("Enter the First Value\n");
    scanf("%f",&a1);
    printf("Enter the Second Value\n");
    scanf("%f",&b1);
    c1 = a1 * b1;
    printf("The Multiplication of %.2f and %.2f is %.2f\n\n", a1 , b1 , c1);
}
void divide(){
    float a1 , b1 , c1;
    printf("Enter the First Value\n");
    scanf("%f",&a1);
    printf("Enter the Second Value\n");
    scanf("%f",&b1);
    if (b1 != 0) {
    c1 = a1 / b1;
    printf("The Division of %.2f and %.2f is %.2f\n\n", a1 , b1 , c1);
    }
    else {
        printf("Cannot Divide by Zero\n\n");
    }
}
void floordivision(){
    float a1 , b1 , c1;
    printf("Enter the First Value\n");
    scanf("%f",&a1);
    printf("Enter the Second Value\n");
    scanf("%f",&b1);
    if (b1 != 0){
    c1 = floor(a1 / b1);
    printf("The Floor Division of %.2f and %.2f is %.2f\n\n", a1 , b1 , c1);
    }
    else {
        printf("Cannot Divide by Zero\n\n");
    }
}
void modulus(){
    int a1 , b1 , c1;
    printf("Kindly only enter integer type values !!!\n");
    printf("Enter the First Value\n");
    scanf("%d",&a1);
    printf("Enter the Second Value\n");
    scanf("%d",&b1);
    if (b1 != 0){
    c1 = a1 % b1;
    printf("The Modulus of %d and %d is %d\n\n", a1 , b1 , c1);
    }
    else {
        printf("Cannot Divide by Zero\n\n");
    }
}
int main (int argc ,char *argv[]){
    while(1){
        int z;
        printf("Press 1 if you want to do Addition\n");
        printf("Press 2 if you want to do Subtraction\n");
        printf("Press 3 if you want to do Multiplication\n");
        printf("Press 4 if you want to do Division\n");
        printf("Press 5 if you want to do Floor Division\n");
        printf("Press 6 if you want to find out Modulus\n");
        printf("Press 7 to exit the calculator\n");
        printf("Enter the value according to your choice\n");
        scanf("%d",&z);
        if (z == 1){
            add();
            continue;
        }
        else if (z == 2){
            subtract();
            continue;
        }
         else if (z == 3){
            multiply();
            continue;
        }
         else if (z == 4){
            divide();
            continue;
        }
         else if (z == 5){
            floordivision();
            continue;
        }
         else if (z == 6){
            modulus();
            continue;
        }
        else if (z == 7 ){
            printf("Thank you for using the Calculator\n");
            printf("Developed by Aviral Tyagi\n");
            break; 
        }
        else{
            printf("Enter the value from the options mentioned above\n\n");
            continue;
        }
        

    }
    return 0;

}