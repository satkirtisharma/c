#include <stdio.h>
int main()
{
    int i,s,max,a=0,lp,sp,min;
    printf("enter size");
    scanf("%d",&s);
     int arr[s];
     printf("Enter %d elements in the array : ", s);
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for (int i = 1; i < s; i++) {
    if (max < arr[i]) {
      max = arr[i];
      lp=i;
    }
  }
   for(i=1; i<s; i++)
   {
    if(min > arr[i])
     {
       min = arr[i];
       sp=i;
       
	 } 
   }
   arr[sp]=max;
   arr[lp]=min;
    printf("\nElements in array are: ");
    for(i=0; i<s; i++)
    {
        printf("%d, ", arr[i]);
    }
    return 0;
}
