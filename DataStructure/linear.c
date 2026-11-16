#include<stdio.h>
 int main()
   {
    int a[10],i,n,key,found=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the element\n");
    for(i=0;i<n;i++)
      {
       scanf("%d",&a[i]);
       }
       printf("The elements are searched:");
       scanf("%d",&key);
       for(i=0;i<n;i++)
         {
          if(a[i]==key)
           {
            printf("element found at position %d \n",i+1);
            found=1;
            break;
            }
           }
           if(found==0)
           {
            printf("Element not found\n");
           }
           return 0;
         }
