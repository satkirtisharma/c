//STUDENTS FREQUENCY
#include <stdio.h>
int main()
{
    int i,s,b=0,a=0;
    printf("enter size");
    scanf("%d",&s);
     int arr[s];
     printf("Enter %d elements in the array : ", s);
    for(i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<s;i++){
        if (arr[i]>60){
            a++;
        }
        else{
            b++;
        }
    }
    printf("above 60 is%dbelow 60 is%d",a,b);
}   