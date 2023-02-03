#include <stdio.h>    
int main ()  
{     
    int x, y ;
    scanf("%d",&x);
     scanf("%d",&y);
    int arr[x][y],i,j;     
    for (i=0;i<x;i++)    
    {    
        for (j=0;j<y;j++)    
        {    
                       
            scanf("%d",&arr[i][j]);    
        }    
    }    
     
    for(i=0;i<x;i++)    
    {    
          
        for (j=0;j<y;j++)    
        {    
            printf("%d ",arr[i][j]);    
        }
         printf("\n"); 
    }    
} 