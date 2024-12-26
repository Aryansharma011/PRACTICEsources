#include<stdio.h>
int main(){
    float m,p,c,e,h;
    printf("Write the value of all 5 subjects = ");
    scanf("%f%f%f%f%f",&m,&p,&c,&e,&h);
    m + p + c + e + h;
    printf("The sum of marks of all subjects = %.2f\n",m + p + c + e + h);
    (m + p + c + e + h)/5;
    printf("The percentage of marks of all subjects = %.3f",(m + p + c + e + h)/5);
    return 0;
}
