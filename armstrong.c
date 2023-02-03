#include<stdio.h>
#include<math.h>
int main(){
    int x=143,y=0,z,r,s=0;
    z=x;
    while(x>0){
        y++;
        x/10;

    }
    x=z;
    while(z>0){
        r=z%10;
        s=s+ pow(r,y);
        z=z/10;

    }
    if (s==x){
        printf("armstrong");
    }
    else {
        printf("not armstrong");
    }
}