#include<stdio.h>
int power(int x,int y){
    int z=1;
     while (y != 0) {
        z *= x;
        y--;
    }
    return z;
}
int main (){
    int a , b;
    scanf("%d%d",&a,&b);
    int z=power(a,b);
    printf("%d",z);

}