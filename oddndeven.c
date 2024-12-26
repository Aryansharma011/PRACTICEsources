#include<stdio.h>
int main(){
    int A;
    printf("Enter the number : ");
    scanf("%d",&A);
    if(A%2==0){
        printf("Entered number is EVEN");
    }
    else{
        printf("Entered number is ODD");
    }
    return 0;
}