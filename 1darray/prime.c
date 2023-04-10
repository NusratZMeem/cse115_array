// Take N numbers from the user as input, put them in an
//array and print the number of primes present in them.
#include<stdio.h>
int main()
{
    int a[100],i,j,n,count;
    printf("Enter the limit: ");
    scanf("%d",&n);

    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The prime numbers in the array are: ");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
                {
                    count=1;
                }

        }
        if(count==0 && a[i]>1)
        {
            printf(" %d",a[i]);
        }
    }

}

