// #include <stdio.h>
// int main (){
//     char strng[5];
//     gets(strng);
//     int p=1;
//     for (int i=0;i<5;i++){
//         for (int j=4;j>=0;j--){
//             if(strng[i]!=strng[j]){
//                 p=0;
//                 break;
//             }

//             break;
//         }
//     }
//     if(p==0){
//         printf("not pallindrome");
//     }
//     else
//     printf("pallindrome");

// }
#include<stdio.h>
#include<string.h>
int main(){
    char s[1000];
    scanf("%[^\n]",s);
    int i=0,l=strlen(s),f=0,x;
    if(l%2!=0){
        x=(l+1)/2;
    }
    else{
        x=l/2;
    }
   for(i=0;s[i]!='\0';i++){
        if(s[l-1] != s[i]){
            printf("NOT PALLANDROME");
            f=1;
            break;
        }
        l--;
    }
    if(f==0){
        printf("PALLANDROME ");
    }
}