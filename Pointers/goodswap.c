#include<stdio.h>
void goodswap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    }
    int main()
    {
        int x=0;
        int y=100;
        goodswap(&x,&y);
        printf("%d,%d",x,y);

    }
