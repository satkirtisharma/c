#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int w,x,y,z=0;
    scanf("%d",&x);
    w=x;
    while (x>0){
        y=x%10;
        z=z*10+y;
        x=x%10;
    }printf("%d",z);
    /*if (z==w){
        printf("Palindrome");
    }
    else if(z!=w)
    {
        printf("Not Palindrome");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
