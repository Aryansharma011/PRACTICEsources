#include<stdio.h>
#include<math.h>
int main(){
float x,a,b,c,x1,x2,D;
printf("Enter the value of a = ");
scanf("%f",&a);
printf("Enter the value of b = ");
scanf("%f",&b);
printf("Enter the value of c = ");
scanf("%f",&c);
x1=-(b+sqrt(pow(b,2)-4*a*c))/2*a;
printf("your one root is : %.2f",x1);
x2=-(b-(pow(b,2)-4*a*c))/2*a;
printf("your another root is : %.2f",x2);
    return 0;
}