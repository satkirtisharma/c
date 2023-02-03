#include <stdio.h>
int main()
{
    int i,m;
    printf("enter size");
    scanf("%d",&m);
     int arr[m];
     printf("Enter %d elements in the array : ", m);
    for(i=0; i<m; i++)
    {
        scanf("%d", &arr[i]);
    }
     printf("\nElements in array are: ");
    for(i=m; i>0; i--)
    {
        printf("%d, ", arr[i-1]);
    }

    return 0;

}