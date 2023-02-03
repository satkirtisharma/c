//wap to find copy without function
#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100]={'0'},c[100];
    scanf("%[^\n]",a);
    int i,j;
    for ( i =0;a[i]!='\0';i++);
     for ( j =0;j<i;j++)
    {
        b[j]=a[j];
    }
    strcpy(c,a);
    puts(c);
    puts(b);

}