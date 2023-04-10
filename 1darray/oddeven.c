//C program that prints the odd and the even numbers in an array separately
#include<stdio.h>
int main()
{
    int i,a[20],n;
    printf("enter the limit: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The even elements are: \n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }

    }
    printf("the odd numbers are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\n",a[i]);
        }
    }
        return 0;
}
