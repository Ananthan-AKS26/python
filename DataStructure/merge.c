#include<stdio.h>
 void main()
   {
    int a[100],b[50],c[100],i,n,k,m,j;
    printf("Enter the size of the first array");
    scanf("%d",&m);
    printf("\n Enter the elements of first array (sorted order):\n");
    for(i=0;i<m;i++)
    {
     scanf("%d",&a[i]);
     }
     printf("\n Enter the size of the second array:");
     scanf("%d",&n);
      printf("\n Enter the elements of second array (sorted order):\n");
     for(i=0;i<n;i++)
      {
       scanf("%d",&b[i]);
       }
       i=0;
       j=0;
       k=0;
       while(i<m && j<n)
        {
         if(a[i]<b[j])
          {
          c[k]=a[i];
          i++;
         }
         else
         {
          c[k]=b[j];
          j++;
          }
          k++;
          }
          while(i<m)
           {
            c[k]=a[i];
            i++;
            k++;
           }
           while(j<n)
           {
           c[k]=b[j];
           j++;
           k++;
           }
           printf("merged array=\n");
           for(i=0;i<m+n;i++)
             {
              printf("%d\n",c[i]);
             }
           }
     
