//Finding the average number using array in C
#include<stdio.h>
int main()
{
    int i,a[5],sum=0;
    float avrg;
    printf("Enter the elements: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    printf("The sum is :%d\n",sum);
    avrg=sum/5.0;
    printf("The average is :%f\n",avrg);
     return 0;

}
