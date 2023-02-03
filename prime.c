#include<stdio.h>
int main(){
    int i=1,n,p=0;
    scanf("%d",&n);
    while(i<=n){
        if (n%i==0){
            p=p+1;
        }
      i=i+1;  
    }
    if(p==2){
        printf("prime");
    }
    else
    printf("not prime");

}