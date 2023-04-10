//Input values in selected rows and column and print them
#include<stdio.h>
int main()
{
    int i,j,a[5][6]={0};
    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            if(j==0||j==1)
            {
            a[i][j]=500;
            }

            else if(j==2||j==4)
            {
                a[i][j]=100;
            }
            //else
            //{
              //  a[i][j]=0;
            //}
        }

    }
     for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
           printf("\n a[%d][%d]=%d\n",i,j,a[i][j]);
        }

    }

}
