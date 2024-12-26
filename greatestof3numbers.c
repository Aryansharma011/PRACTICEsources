#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("a is greater than b and c");
    }
    else if(b>a&&b>c){
        printf("b is greater than a and c");
    }
    else if(c>a&&c>b){
        printf("c is greater than a and b");
    }
    else{
        printf("All numbers are equall");
    }
    return 0;
}