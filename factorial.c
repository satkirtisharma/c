#include<stdio.h>
int main(){
int x,y,n;
x=y=1;
scanf("%d",&n);
while(n>=x){
    y=y*x;
    x++;
}
printf("%d",y);
}