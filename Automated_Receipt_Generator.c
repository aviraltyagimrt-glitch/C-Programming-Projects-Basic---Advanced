#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * replaceword(const char *str,const char *oldword,const char *newword)
{
    char * newstring;
    int i = 0;
    int count = 0;
    int oldwordlength,newwordlength;
    oldwordlength = strlen(oldword);
    newwordlength = strlen(newword);
    for (i = 0; i<(int)strlen(str);i++)
    {
        if(strstr(&str[i] , oldword) == &str[i])
        {
            count++;
            i = i + oldwordlength -1;
        }
        
    }
    newstring = (char *)malloc(i + count * (newwordlength - oldwordlength) + 1);
    i = 0;
    while(*str)
    {
        if(strstr(str,oldword) == str)
        {
            strcpy(&newstring[i],newword);
            i += newwordlength;
            str += oldwordlength;
        }
        else 
        {
            newstring[i] = *str;
            i += 1;
            str += 1;
        }
    }
    newstring[i] = '\0';
    return newstring;

}


char * replaceword2(const char *str2,const char *oldword,const char *newword)
{
    char * newstring;
    int i = 0;
    int count = 0;
    int oldwordlength,newwordlength;
    oldwordlength = strlen(oldword);
    newwordlength = strlen(newword);
    for (i = 0; i<(int)strlen(str2);i++)
    {
        if(strstr(&str2[i] , oldword) == &str2[i])
        {
            count++;
            i = i + oldwordlength -1;
        }
        
    }
    newstring = (char *)malloc(i + count * (newwordlength - oldwordlength) + 1);
    i = 0;
    while(*str2)
    {
        if(strstr(str2,oldword) == str2)
        {
            strcpy(&newstring[i],newword);
            i += newwordlength;
            str2 += oldwordlength;
        }
        else 
        {
            newstring[i] = *str2;
            i += 1;
            str2 += 1;
        }
    }
    newstring[i] = '\0';
    return newstring;

}
int main(int argc,char *argv[])
{
    FILE *g = NULL;
    g = fopen("letter.txt","r");
    char str[500];
    fgets(str,500,g);
    char str2[500];
    fgets(str2,500,g);
    fclose(g);

    FILE *a = NULL;
    a = fopen("receipt.txt","w");
    FILE *n = NULL;
    n = fopen("receipt.txt","a");
    char *receipt = str;
    char *receiptl2 = str2;
    char name[20];
    printf("Enter the name of the customer\n");
    gets(name);
    char item[20];
    printf("Enter the item purchased\n");
    gets(item);
    char outlet[20];
    printf("Enter the outlet name\n");
    gets(outlet);
    receipt = replaceword(str,"{{name}}",name);
    receipt = replaceword(receipt,"{{item}}",item);
    receipt = replaceword(receipt,"{{outlet}}",outlet);
    receiptl2 = replaceword(str2,"{{outlet}}",outlet);
    printf("The generated recipt is\n%s%s",receipt,receiptl2);
    fprintf(a,"%s",receipt);
    fprintf(n,"%s",receiptl2);
    fclose(a);
    fclose(n);
    return 0;
}