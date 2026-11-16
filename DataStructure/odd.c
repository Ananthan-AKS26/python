#include<stdio.h>
int main()
 {
  int a[10],i,n;
  printf("enter the limit:");
  scanf("%d",&n);
  printf("enter the numbers:");
  for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
      }
       printf("The even numbers are:\n");
       for(i=0;i<n;i++)
       {
       if(a[i]%2==0)
       {
        printf("%d\n",a[i]);
        }
       }
       printf("The odd numbers are:\n");
       for(i=0;i<n;i++)
         {
          if(a[i]%2!=0)
           {
            printf("%d\n",a[i]);
            }
         }
          return 0;
        }  
