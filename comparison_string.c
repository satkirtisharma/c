#include <stdio.h>
#include <string.h>
int main(){
    char strng[10],cstrng[5];
    int l;
    gets(strng);
    gets(cstrng);
    int i;
    for (  i=0;(i!='\0')&&(strng[i]=cstrng[i]);i++){
        if(strng[i]==cstrng[i])
        printf("same");
        else
        printf("not same");
    }
}