#include<stdio.h>
int main()
{
    int *p;
    int x;
    p=&x;
    //*p(value)
    printf("%p\n",p);
    printf("%d",*p);
}

