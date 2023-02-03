#include<stdio.h>
int hamming(int x, int y ){
    int c=0;
  while((x!=0)||(y!=0))
  {
  if ((x%2)!=(y%2))
       c++;
       x=x/2;
       y=y/2;
  }
   printf("%d",c);

}
int main (){
    int a,b;
    scanf ("%d%d",&a,&b);
    hamming(a,b);
}