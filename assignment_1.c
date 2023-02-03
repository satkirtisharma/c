#include<stdio.h>
int main()
{
    float a,b,s;
    printf("enter price and sales tax");
    scanf("%f %f",&a,&b);
    s=((b/100)*a)+a;
    printf("total price after adding sales tax :%f",s);
    return 0;
}