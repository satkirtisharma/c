#include<stdio.h>
int main()
{
   int n, a[20];

   printf("size of  array: ");
   scanf("%d", &n);

   printf("array elements:");
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }

   printf("Even array are");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2==0)
     printf("%d ", a[i]);
   }

   printf("Oddarray are");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2!=0)
     printf("%d ", a[i]);
   }

   return 0;
}