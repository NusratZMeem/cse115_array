//Finding the minimum number using array in C
#include<stdio.h>
int main()
{
    int i,a[10],n;
    int min;
    printf("enter the elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("The minimum number is:%d",min);
    return 0;
}

