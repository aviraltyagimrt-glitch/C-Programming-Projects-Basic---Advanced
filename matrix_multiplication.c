#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main(int argc,char *argv[])
{
    int a,b,c,d;
    printf("Enter the no. of rows you want in your matrix 1st\n");
    scanf("%d",&a);
    getchar();
    printf("Enter the no. of columns you want in your matrix 1st\n");
    scanf("%d",&b);
    getchar();
    printf("Enter the no. of rows you want in your matrix 2nd\n");
    scanf("%d",&c);
    getchar();
    printf("Enter the no. of columns you want in your matrix 2\n");
    scanf("%d",&d);
    getchar();
    int matrix[a][b];
    printf("\nEnter the values for 1st Matrix\n");
    for(int i = 0; i<a;i++)
    {
        for (int j = 0; j<b;j++)
        {
            // int z,z2;
            printf("Enter the value of %d %d element of the matrix\n",i,j);
            scanf("%d",&matrix[i][j]);
            printf("\n");
            
        }
        // printf("The value at %d %d element of the matrix is %d",i,j,matrix[i][j]);
    }
    int matrix2[c][d];
    printf("\nEnter the value for 2nd Matrix\n");
    for(int k = 0; k<c;k++)
    {
        for(int l = 0;l<d;l++)
        {
            // int z3,z4;
            printf("Enter the value of %d %d element of the matrix\n",k,l);
            scanf("%d",&matrix2[k][l]);
            // printf("The value at %d %d element of the matrix is %d\n",k,l,matrix2[k][l]);

        } 

    }
    if (b != c) {
    printf("Matrix multiplication not possible: columns of matrix1 (%d) must equal rows of matrix2 (%d)\n", b, c);
    return 1;
}

    int result[a][d];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            result[i][j] = 0;
            for (int k = 0; k < b; k++) {
                result[i][j] += matrix[i][k] * matrix2[k][j];
            }
        }
    }

    printf("\nThe resultant matrix is:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}