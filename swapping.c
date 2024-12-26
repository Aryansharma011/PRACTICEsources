#include<stdio.h>
int main(){
    float a,b,x;
    printf("Enter the value of a = ");
    scanf("%f",&a);
    printf("Enter the value of b = ");
    scanf("%f",&b);
    printf("Before swapping numbers, a = %f\nb = %f\n",a,b);
    x = a;
    a = b;
    b = x;
    printf("After swapping numbers, a = %f\nb = %f",a,b);
    return 0;
}