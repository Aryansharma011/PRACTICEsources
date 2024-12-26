#include<stdio.h>
int main(){
    float f,c;
    printf("Enter temprature in Celsius : ");
    scanf("%f",&c);
    f = c*9/5+32;
    printf("Temprature in Fahremheit is : %f",f);
    return 0;
}