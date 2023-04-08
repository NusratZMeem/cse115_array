//standard deviation using array in c
#include<stdio.h>
int main()
{
int i;
float a[100],n,sum=0.0,mean,std_dev=0.0;
printf("Enter the elements:");
scanf("%f",&n);

for(i=0;i<n;i++)
{
    scanf("%f",&a[i]);
}
for(i=0;i<n;i++)
{
    sum+=a[i];
}
mean=sum/n;
//printf("Mean is:%f",mean);

for(i=0;i<n;i++)
{
std_dev+=pow(a[i]-mean,2);
}
std_dev=sqrt(std_dev/n);
printf("Standard Deviation = %f", std_dev);
return 0;
}

