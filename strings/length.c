//Calculate the string length
#include<stdio.h>
int main()
{
    char str[100];
    int i,len=0;

    printf("Enter the string here: ");
    gets(str);

    for(i=0; str[i]!='\0';i++)
    {
        len ++;
    }
    printf("The length of the string is:%d ",len);
}
