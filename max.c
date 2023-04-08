//Finding the maximum number using array in C
#include<stdio.h>
int main()
{
    int i,a[5],n;
    int max;
    printf("Enter the elements: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("The maximum number is : %d",max);
    return 0;
}
