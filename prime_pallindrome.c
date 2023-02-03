#include<stdio.h>
int prime(int n ){
    int i=1,p=0,c=0;
    while(i<=n){
        if (n%i==0){
            p=p+1;
        }
      i=i+1;  
    }
    if(p==2){
       c=0;
    }
    else
   c++;
   return c;


}
int pallindrome (int n){
    int s=0, t=n,r,l;
    while(n>0)    
{    
r=n%10;    
s=(s*10)+r;    
n=n/10;    
}    
if(s==t)    
l=0;   
else    
l=1;
return l;   
}
int main (){
    int a;
    scanf("%d",&a);
    while (a++){ 
    if ((prime(a)==0) &&(pallindrome(a)==0)){ 
    printf("%d",a);
    break ;
    }
    }
    
}