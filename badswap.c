#include<stdio.h>
void badswap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    //a=100,,b=0
}
int main()
{
    int x=0;
    int y=100;
    badswap(x,y);
    printf("%d,%d",x,y);

}
