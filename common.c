#include <stdio.h>
int main()
{    
    int t,i;
    int arr[2];
        for(i=0 ; i<2 ; i++)
    {
        printf("enter");
        scanf("%d", &arr[i]);
    }
    int y=0,c=0,max,smax;
        if (arr[0]>arr[1]){ 
    max=arr[0];
    smax=arr[1];}
    else {
        max=arr[1];
        smax=arr[0];
    }
     for(int i=2;i<=smax;i++){
         if(smax%i==0&&max%i==0){
             y=i;
             c++;
             
         }
         
     }
     printf("%d",y);
    /* if (c==\\1){
     printf("%d %d\n",arr[0]/y,arr[1]/y);    
     
     } 
        else {
            printf("Not Possible\n");
        }*/
        
        
        

  
    return 0;

}