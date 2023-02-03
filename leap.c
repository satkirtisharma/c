#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int n,x=4;
            scanf("%d",&n);
            while (n>x){
                if ((x%4)==0){
                    printf("%d ",x);
                }
                else if (x%400==0){
                    printf("%d",x);
                }
               
             x++;   
            }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
