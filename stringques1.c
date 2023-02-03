//wap to find length without function
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];

   scanf("%[^\n]",a);
    int i,j;
    for ( i =0;a[i]!='\0';i++);
     
    int l=strlen(a);
    printf("%d\n",l);
    printf("%d",i);

}