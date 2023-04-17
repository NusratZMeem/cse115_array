// Replace vowels with *
//Calculate the string length
#include<stdio.h>
int main()
{
    char s1[100];
    int i;

    printf("Enter the string here: ");
    gets(s1);

    for(i=0; s1[i]!='\0';i++)
    {
        i++;
    }
    printf("The length of the string is:%d \n",i);

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
        {
            s1[i]='*';
        }
        //puts(s1);
    }
        printf("%s\n",s1);
        }

