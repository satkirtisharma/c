#include<stdio.h>
#include<math.h>
int main(){
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
        int dif=abs(arr[1]-arr[0]);
        for(int k=0;k<n;k++){
            for(int l=k+1;l<n;l++){
                if(abs(arr[l]-arr[k])>dif){
                    dif=abs(arr[l]-arr[k]);
                }
        }
        }
        printf("%d\n",dif);
    }
return 0;
}