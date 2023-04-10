//
#include<stdio.h>
int main()
{
    int i,j,a[5][7]={0};
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            if((i==0||i==1 )&&(j==2||j==4))
            {
                a[i][j]=100;
            }
            else if((i==2)&&(j==2||j==4))
            {
                a[i][j]=50;
            }
             else if(((i==2)&&(j==5||j==6))||((i==3)&&(j==0||j==1||j==2||j==3||j==4)))
            {
                a[i][j]=500;
            }
            else if(i==4&& j==2)
            {
                a[i][j]=-500;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("\t a[%d][%d]=%d",i,j,a[i][j]);
}
printf(" \n");

    }
    return 0;
}
