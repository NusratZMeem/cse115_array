//find the second largest number
#include<stdio.h>
int main()
{
    int i,n,a[30],sec_max,max;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum number is:%d\n",max);

    sec_max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]!=max && a[i]>sec_max)
        {
            sec_max=a[i];
        }
    }
    printf("The second maximum number is:%d",sec_max);
}

