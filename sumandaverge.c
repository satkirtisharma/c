#include <stdio.h>
int main()
{
    int i,s=0,m;
    float avg;
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
        s=s+arr[i];
    }

     printf("\nsum of Elements in array are: %d",s);
     avg=(float)s/2;
     printf("\naverage of elements are %g",avg);
    return 0;

}