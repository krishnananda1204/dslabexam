#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],b[10],c[10],i=0,j=0,k=0,m,n;
   printf("enter the size of first array:");
   scanf("%d",&m);
   printf("enter the elements in the first array:\n");
   for(i=0;i<m;i++)
     {
       scanf("%d",&a[i]);
     }
     printf("enter the size of second array:");
   scanf("%d",&n);
   printf("enter the elements in the second array:\n");
   for(i=0;i<n;i++)
     {
       scanf("%d",&b[i]);
     }
     i=0;
     j=0;
     while(i<n && j<m)
     {
     if(a[i]<=b[j])
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
       printf("first array is\n");
       for(i=0;i<m;i++)
       {
       printf("%d",a[i]);
       printf("\t\n");
       }
        printf("second array is\n");
        for(i=0;i<n;i++)
       {
       printf("%d",b[i]);
       printf("\t\n");
       }
       printf("merged array is:\n");
       for(i=0;i<m+n;i++)
       {
           printf("%d",c[i]);
          printf("\t\n");
          }
          getch();
          }
}
