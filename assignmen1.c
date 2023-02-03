//Write a C program to input temperature in Centigrade and convert to Fahrenheit. How to convert temperature from degree centigrade to degree Fahrenheit in C programming. Logic to convert temperature from Celsius to Fahrenheit in 
#include<stdio.h>
int main (){
      float Celsius;
    int F;
    printf("enter the value");
    scanf("%f", &F);
    Celsius = ((F - 32) * 5) / 9;
    printf("\n\n Temperature in Celsius is : %f", Celsius);
    return (0);
}
