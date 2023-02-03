#include <stdio.h>
int main()
{
    float Celsius;
    int F;
    printf("enter the value");
    scanf("%f", &F);
    Celsius = ((F - 32) * 5) / 9;
    printf("\n\n Temperature in Celsius is : %f", Celsius);
    return (0);
}