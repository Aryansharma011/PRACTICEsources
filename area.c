#include<stdio.h>5
int main(){
    float r,C,A;
    printf("The value of r :");
    scanf("%f",&r);
    A = 3.1415 * r * r;
    C = 2 * 3.1415 * r;
    printf("The area is : %.2f\n",A);
    printf("The circumference is : %.2f",C);
    return 0;
    }