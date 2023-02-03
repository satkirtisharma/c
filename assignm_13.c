#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,m,t;
    printf("enter co ordinate of  1st and 2nd point x1,x2,y1,y2");
    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
    m=((y2-y1)/(x2-x1));
    t=atan(m);
    printf("%f%f",m,t);
    return 0;
}