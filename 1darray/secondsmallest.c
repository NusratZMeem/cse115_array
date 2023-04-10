//find the second smallest number
#include<stdio.h>
int main()
{
    int i,a[30],min,n,sec_min;
    printf("Enter the size: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
           min=a[i];

        }
}
printf("The minimum number is:%d\n",min);

sec_min=a[0];

for(i=0;i<n;i++)
{
    if(a[i]!=min&&a[i]<sec_min)
    {
        sec_min=a[i];
    }

}
printf("The second minimum number is:%d\n",sec_min);
}
