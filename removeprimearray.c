#include <stdio.h>
int main()
{
    int i,m,o=1,c=0;
    printf("enter size");
    scanf("%d",&m);
     int arr[m];
     printf("Enter %d elements in the array : ", m);
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("\nElements in array are: ");
    for(i=0; i<m; i++)
    {
        while(arr[i]>o){
            if(arr[i]%o==0){
              c=c+1;  
            }
        }
        if(c==1){
            printf("%d",arr[i]);
        }
    }

    return 0;

}