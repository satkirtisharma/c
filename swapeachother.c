/*C program to swap adjacent elements of an one dimensional array.*/
 
#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX],n,i;
    int temp;
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("Not even.");
        return 1;
    }
      else{
    for(i=0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
  
        
    for(i=0;i < n;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }
    for(i=0;i < n;i++)
    {
        printf("%d ",arr[i]);
    }
    }
    return 0;
}
