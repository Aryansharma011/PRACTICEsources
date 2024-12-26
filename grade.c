#include<stdio.h>
int main(){
    float per,p,c,m,e,h,sum;
    printf("Physics marks = ");
    scanf("%f",&p);
    printf("Chemistry marks = ");
    scanf("%f",&c);
    printf("Maths marks = ");
    scanf("%f",&m);
    printf("English marks = ");
    scanf("%f",&e);
    printf("Hindi marks = ");
    scanf("%f",&h);
    sum = p+c+m+e+h;
    printf("Your total marks is %.2f\n",sum);
    per = sum/5;
    printf("Your percentage is %.2f\n",per);
    if(per<=100&&per>=90){
        printf("Your grade is A");
    }
    else if(per<90&&per>=80){
        printf("Your grade is B");
    } 
    else if(per<80&&per>=70){
        printf("Your grade is C");
    }
    else if(per<70&&per>=60){
        printf("Your grade is D");
    }
    else if(per<60&&per>=50){
        printf("Your grade is E");
    }
    else if(per<50&&per>=30){
        printf("Your grade is F");
    }
    else{
        printf("You are fail");
    }
    return 0;
}