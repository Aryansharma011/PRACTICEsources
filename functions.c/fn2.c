// 2. With argument and with return value
#include<stdio.h>
int sum(int a,int b){
    return a + b;
}
int main(){
    int a,b,c;
    printf("Enter the valu of a = ");
    scanf("%d",&a);
    printf("Enter the valu of b = ");
    scanf("%d",&b);
    c = sum(a,b);
    printf("The sum is %d",c);
    return 0;
}