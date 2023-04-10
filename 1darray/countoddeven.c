//c program that counts the no of odd and even in the array
#include<stdio.h>
int main()
{
    int i,a[25],n,evencount=0,oddcount=0;
    printf("enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   // printf("The even elements are:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            evencount++;
            printf("even %d\n",a[i]);
        }
        else
            {
                oddcount++;
                printf("odd %d\n",a[i]);
            }
           // printf("\n \tNumbers :%d",a[i]);(for the array value output

    }
    printf("evencount: %d\n",evencount);
    printf("oddcount :%d\n",oddcount);
    return 0;
}

