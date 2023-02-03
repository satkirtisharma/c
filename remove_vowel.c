 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char x[100];
    int i,j=0,len;
    scanf("%[^\n]",x);
    len=strlen(x);
    for (i=0;i<len;i++){
        if (x[i]=='a'||x[i]=='i'||x[i]=='e'||x[i]=='o'||x[i]=='u'||x[i]=='A'||x[i]=='I'||x[i]=='E'||x[i]=='O'||x[i]=='U'){
           for (j=i;j<len;j++){
               x[j]=x[j+1];
           }
            len--;
        
    }}
    
    printf("%s",x);   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
