//Input values in selected rows and column and print them
#include<stdio.h>
int main()
{
    int i,j,a[4][7]={0};
    for(i=0;i<4;i++)
    {
        for(j=0;j<7;j++)
        {
            if(j==0)
            {
                a[i][j]=50;
            }
            else if(j==2)
            {
                a[i][j]=40;
            }
            else if(j==5)
            {
                a[i][j]=500;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<7;j++)
        {
            a[1][2]=0;
            a[1][4]=100;
        printf("\t a[%d][%d]=%d",i,j,a[i][j]);
        }
      printf(" \n");
    }
    return 0;
}

