#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r,x,t=0,n=0;
    scanf("%d",x);
    while (x==0){
        r=x%10;
        if (r==3)
            t++;
        else if(r==9)
            n++;
        x=x/10;
    }
    if(t>0&&n>0)
        printf("Yes");
     else
         printf("No");

   
    return 0;
}
