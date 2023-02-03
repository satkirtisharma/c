#include <stdio.h>
int main()
{
    int i,s,max,smax,a=0;
    printf("enter size");
    scanf("%d",&s);
     int arr[s];
     printf("Enter %d elements in the array : ", s);
    if (arr[0]>arr[1]){ 
    max=arr[0];
    smax=arr[1];}
    else {
        max=arr[1];
        smax=arr[0];
    }
     for ( i=0; i<s; i++) {
    if (max < arr[i]) {
      smax=max;
      max=arr[i];
    
    }
    else if(smax<arr[i]&&max!=arr[i]){
        smax=arr[i];
    }
  
   }
    
    printf("max=%d",max);
      printf("smax=%d",smax);
}    