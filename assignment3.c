#include<stdio.h>
void main()
     {
     int num=5,*p=&num,x=*p;
     printf("%d %d %d",++num,x+2,*p--);
     }