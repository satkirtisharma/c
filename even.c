#include<stdio.h>
int main(){
    int x,y=1;
    scanf("%d",&x);
    while(y<=x){
        printf("%d\n",y);
        y=y+2;
    }
    printf("exit");
    return 0;
}