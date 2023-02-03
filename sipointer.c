#include<stdio.h>
void si(int *a,int *b,int *c)
{
    float si;
  si=(*a**b**c)/(100*1.0);
  printf("%d",si);
}
int main()
{
    int p,r,t;
    scanf("%d%d%d",&p,&r,&t);
    si(&p,&r,&t);
}
