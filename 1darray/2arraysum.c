//Write a c program to read two arrays from user , add them and print their sum
#include<stdio.h>
int main()
{
    int i,n,a[100],b[100],sum[100];
    printf("Enter the limit:");
    scanf("%d",&n);

    printf("Enter the elements of a: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of b:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("The sum is: ");
    for(i=0;i<n;i++)
    {
        sum[i]=a[i]+b[i];
    }

    for(i=0;i<n;i++)
    {
        printf("\t %d ",sum[i]);
    }
}
