#include<stdio.h>
int main(){
    int n,a=1,factorial=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(a<=n){
    factorial=factorial*a;
    a++;
    }
    printf("Factorial of your given number is = %d",factorial);
    return 0;
}