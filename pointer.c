#include<stdio.h>
void fact(int *a)
{
    int f=1;
    while((*a)){
        f=f*(*a);
        (*a)--;
    }
    printf("%d",f);
  
}
int main()
{
    int a;
    scanf("%d",&a);
    fact(&a);
}
