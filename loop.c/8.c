#include<stdio.h>
int main(){
    int n=1,sum=0;
    do{
        sum=sum +n;
        n=n+2;
    }
    while(n<=100);
        printf("%d",sum);
    return 0;
}