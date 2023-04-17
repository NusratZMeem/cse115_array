//Make a chat bot that will be like
//- what is your name?
//-user will give input
//- XYZ is a very nice name
#include<stdio.h>
#include<string.h>
int main()
{
    char name[100], input[100];
    printf("Hi, I'm a chatbot. What's your name?\n");
    scanf("%s", name);
     getchar();

    printf("Nice to meet you, %s! You have a really nice name\n", name);

    while(1)
    {
        printf("> ");
        fgets(input,100,stdin);

         if(strstr(input,"thank you chatbot")!=NULL )
         {
             printf("You're most welcome %s\n",name);
         }
         else if(strstr(input,"how are you")!=NULL)
         {
            printf("I am fine, what about you?");

         }
         else if(strstr(input,"I am also fine.what are your plans for the eid day?")!=NULL)
         {
            printf("I am thinking of spending quality time with my family");

         }
         else if(strstr(input,"that's great! see you again. ")!=NULL)
         {
            printf("Goodbye %s\n",name);
            break;

         }
         else
        {
        printf("I'm sorry, I don't understand what you mean. Could you please repeat that?\n");
        }
    }
}

