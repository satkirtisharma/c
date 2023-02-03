//2.Write a C program to input number of days from user and convert it to years, weeks and days. How to convert days to years, weeks in C programming. Logic to convert days to years, weeks and days in C program.
#include<stdio.h>
int main(){
    int days,year,week;
    scanf("%d",&days);
    year=days/365;
    week=(days%365)/7;
    days=days-((week*7)+(365*year));
    printf("year=%d week=%d  days=%d",year,week,days);

}