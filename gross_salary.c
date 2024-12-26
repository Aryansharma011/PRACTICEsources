#include<stdio.h>
int main(){
    int grs_slry,b_slr ;
    int da = 5;     // da is 5 percent of basic salary...
    int hra = 10;   // hra is 10 percent of basic salary...
    printf("Enter basic salary of an Employee : ");
    scanf("%d",&b_slr);
    da = b_slr*5/100;
    hra = b_slr*10/100;
    grs_slry = b_slr+da+hra;
    printf("Gross Salary of an Employee is : %d",grs_slry);
    return 0;
}