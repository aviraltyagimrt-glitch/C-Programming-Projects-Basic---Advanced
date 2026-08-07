#include <stdio.h>
int palindrome(int n)
{
    int rev_num = 0;
    int og_number = n;
    while(n != 0)
    {
        rev_num = rev_num * 10 + n%10;
        n = n/10;
    }
    if(og_number == rev_num)
    {
        printf("Number is Palindrome\n");
        return 1;
    }
    else
    {
        printf("Number is not Palindrome\n");
        return 0;
    }

}
int main(int argc,char *argv[])
{
    int n;
    printf("Enter the number which you want to check the palindrome of \n");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}