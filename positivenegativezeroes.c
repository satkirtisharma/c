#include <stdio.h>
int main()
{
    int i,m,p=0,n=0,z=0;
    printf("enter size");
    scanf("%d",&m);
     int arr[m];
     printf("Enter %d elements in the array : ", m);
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<m; i++)
    {
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            n++;
        }
        else {
            z++;
        }

    }
    printf("\npositive elements are %d",p);
    printf("\nnegative elements are %d",n);
    printf("\nzeroes are %d",z);

    
    return 0;

}