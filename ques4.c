#include<stdio.h>
int countEven(int *p){
    int c=0;
    for(int i=0;i<8;i++){
        if(*(p+i)%2==0){
            c++;
        }
    }
    return c;
}

void printOdd(int *p){
    for(int i=0;i<8;i++){
        if(*(p+i)%2!=0){
            printf("%d",*(p+i));
        }
    }
}

int search(int *p,int x){
    for(int i=0;i<8;i++){
        if(*(p+i)==x){
            return i;
        }
    }
    return -1;
}
void delete(int *p,int x){
    int i;
    for(i=0;i<8;i++){
        if(*(p+i)==x){
            break;
        }
    }
    for(int j=i;j<7;j++){
    *(p+j)=(p+j+1);
    }

}


int main(){
    int n;
    printf("Enter 8 array elements");
    int a[8];
    int *p=a;
    int m=8;
    for(int i=0;i<m;i++){
        scanf("%d",p+i);
    }
    printf("for counting even numbers:1\nfor printing all order numbers:2\nfor searching a number:3\n for deleting a number:4\n");
    scanf("%d",&n);
    int x;
    switch(n){
        case 1:
            printf("%d",countEven(p));
            break;
        case 2:
            printOdd(p);
            break;
        case 3:
            scanf("%d",&x);
            printf("%d",search(p,x));
            break;
        case 4:
            
            scanf("%d",&x);
            delete(p,x);
            m--;

            for(int i=0;i<m;i++){
                printf("%d",p+1);
            }
            break;
        default:
            printf("Invalid point");
    }

}