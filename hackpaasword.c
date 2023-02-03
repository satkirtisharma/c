#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
        int x,i,k,j,p=0;
        scanf("%d",&x);
        int arr[x];
        for(i=0;i<n;i++){
            k=arr[i];
            for(j=i;j<n;j++){
                if(k==arr[j])
                    p++;
            }
        }
        if(p==0)
            printf("correct");
        else
            printf("incorrect");
        
    return 0;
}
