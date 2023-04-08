#include<stdio.h>
int main()
{
     int a[10], n, i, j, is_prime;
     printf("Enter the number of elements in array : ");
     scanf("%d",&n);
     printf("\nEnter %d numbers in the array:\n", n);

     for(i=0; i<n; i++)
     {
          scanf("%d", &a[i]);
     }

     printf("\nPrime numbers in the array:\n");
     for(i=0; i<n; i++)
     {
          is_prime = 1;
          for(j=2; j<a[i]; j++)
          {
               if(a[i]%j==0)
               {
                    is_prime = 0;
                   // break;
               }
          }

          if(is_prime && a[i]>1)
          {
               printf("%d ", a[i]);
          }
     }
     return 0;
}
