#include<stdio.h>
int main(){
    int n,a = 0,sum = 0;
    printf("Enter the number = ");
    scanf("%d",&n);
    while(a<=n){
        sum = sum + a;
        a++;
    }
    printf("The sum is = %d",sum);
    return 0;
}