#include <stdio.h>

int sqr(int);

int main(){

    int num,squr;
    printf("Enter the number: ");
    scanf("%d",&num);
    squr=sqr(num);
    printf("SQure : %d",squr);


    return 0;
}

int sqr(int n){
    int sqr;
    return sqr=n*n;

}

