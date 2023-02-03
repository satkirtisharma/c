#include<string.h>
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char x[100];
        scanf("%*c%[^\n]",x);
        int l,i=0,j,c=0,s=0;
        l = strlen(x);
        for(i=0;i<l;i++){
            for (j=i+1;j<l;j++){
                if (x[i]!=x[j])
                    s=1;
                else 
                    s++;
               
            }
            if(s==1)
                c++;
            
        }
        printf("%d",c);
    }
}