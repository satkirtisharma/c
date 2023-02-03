#include<stdio.h>
int main()
{ 
    int x,y,z,w;
    printf("input principal");
    scanf("%d",&x);
    printf("input time");
    scanf("%d",&y);
    printf("input rate");
    scanf("%d",&z);
    w=x*y*z;
    printf("simple interest %d",w/100);
    return 0;
}