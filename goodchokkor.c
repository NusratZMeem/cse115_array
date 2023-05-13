#include<stdio.h>
void goodchokkor(int *a,int *b,int *c)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=*c;
    *c=temp;
}
int main()
{
    int x=0;
    int y=100;
    int z=200;
    goodchokkor(&x,&y,&z);
    printf("%d,%d,%d",x,y,z);

}


