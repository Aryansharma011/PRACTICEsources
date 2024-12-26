#include<stdio.h>
int main(){
    int x1,x2,x3,x4,n,reverse;
    printf("enter the value of n : ");
    scanf("%d",&n);
    x1 = n%10;
    x2 = n/10;
    x3 = x2%10;
    x4 = x2/10;
    reverse = x1*100+x3*10+x4;
    printf("The reverse of the entered number n : %d",reverse);
    return 0;
}