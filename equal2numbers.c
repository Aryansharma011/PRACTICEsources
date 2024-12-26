#include<stdio.h>
int main(){
    int A,B;
    printf("Enter the value of A : ");
    scanf("%d",&A);
    printf("Enter the value of B : ");
    scanf("%d",&B);
    if(A==B){
        printf("Both numbers are equal");
    }
    else{
        printf("Both numbers are not equal");
    }
    return 0;
}