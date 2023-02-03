#include <stdio.h>
#include <string.h>
int main(){
    char strng[10],cstrng[5];
    int l;
    gets(strng);
    gets(cstrng);
    l=strlen(strng);
    // for(int i=0;i<10;i++){
    //     l++;
    //     if(strng[i]=='\0')
    //     break;
    // }
    //   //  strcpy(cstrng,strng);
    //   strncpy(cstrng,strng,7);
    //   for(int i=0;i<10;i++){
    //       cstrng[i]=strng[i];
    //       if(i>l){ 
    //    cstrng[i]='/0';   
    //        break;
    //       }
    // //   }
    // strncat(cstrng,strng,3);
    // strcat(cstrng,strng);
    int i=0,j;
    for(i;strng[i]=='/0';i++);
    for (j=0 ; cstrng[j]!='/0' ; j++)
    {
        strng[i]=cstrng[i];
    }
    
     puts(cstrng);

    
    
}
