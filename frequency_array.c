
#include <stdio.h>
int main()
{
    int i,s,c=0,j;
    printf("enter size");
    scanf("%d",&s);
     int arr[s];
     int f[s];
     printf("Enter %d elements in the array : ", s);
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<=s-1;i++){
        if(f[i]==0){
            c=1;
            for (j=i+1;j<=s-1;j++){
                if(arr[i]==arr[j]){
                    c++;
                    f[j]=1;
                }
            }

        }
    }
}   