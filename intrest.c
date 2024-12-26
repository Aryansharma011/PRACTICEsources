#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,n,SI,CI;
    printf("p =");
    scanf("%f",&p);
    printf("r =");
    scanf("%f",&r);
    printf("t =");
    scanf("%f",&t);
    printf("n =");
    scanf("%f",&n);
    SI = (p*r*t)/100;
    printf("The simple intrest is : %f\n",SI);
    CI = p*pow((1 + r/n),(n*t));
    printf("The compound intrest is : %f",CI);
    return 0;
}