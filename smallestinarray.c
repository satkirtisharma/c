
#include <stdio.h>
int main()
{
    int i,s,min,a=0;
    printf("enter size");
    scanf("%d",&s);
     int arr[s];
     min=arr[0];
     printf("Enter %d elements in the array : ", s);
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
     min = arr[0];
  for(i=1; i<s; i++)
   {
    if(min > arr[i])
     {
       min = arr[i];
	 }   
   }
    
    printf("min=%d",min);
}    