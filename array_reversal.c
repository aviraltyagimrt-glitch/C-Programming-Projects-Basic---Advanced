#include <stdio.h>
#include <math.h>
int arr_rev(int arr[])
{
    for(int i = 0; i < 5/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
    
    //return 0;
}
int main(int argc,char *argv[])
{
    int array[] = {8,9,12,14,27};
    arr_rev(array);
    for(int i = 0; i <5 ;i++)
    {
        printf("The value of %d element of array is %d\n",i,array[i]);
    }
    return 0;
}