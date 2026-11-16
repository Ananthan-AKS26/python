#include<stdio.h>
 int main()
   {int a[10],i,n;
   printf("enter the limit:");
   scanf("%d",&n);
   printf("enter the elements:");
   for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
      printf("The elements are:\n");
      for(i=0;i<n;i++)
        {
         printf("%d\n",a[i]);
        }
        return 0;
       }
