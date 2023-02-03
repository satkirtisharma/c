#include <stdio.h>
int main()
{
    int i,m,t,j;
    scanf("%d",&m);
     int arr[m];
     for(i=0; i<m; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=1; i<=m-1; i++)
    {
       for(j=0;j<=m-i-1;j++)
       {
        if(arr[j]>arr[j+1]){
            t=arr[j];
             arr[j]=arr[j+1];   
            arr[j+1]=t;
        }
       }
    }
    for(i=0; i<=m-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;

}
