# include<stdio.h>
int main(){
   int a,b,c,t;
   printf("enter the marks");
   scanf("%d %d %d",&a,&b,&c);
   t=a+b+c;
   if((a>=65)&&(b>=55)&&(c>=50)&&(t>=180))
   {
       printf("eligible");
   }
   else{
       printf("not eligible");
   }
   return 0;
}