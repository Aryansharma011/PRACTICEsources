#include<stdio.h>
int main(){
    int x;
    for(int a=0;a<10;a++){
        printf("%d",a);
        for(int b=0;b<10;b++){
            printf("%d)Enter any number and if u want to exit enter 0 = ",b);
            scanf("%d",&x);
            if(x==0){
                goto end;
            }
        }
    }
    end:
    return 0;
}