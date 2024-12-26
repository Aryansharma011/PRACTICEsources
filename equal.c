#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a , b : ");
    scanf("%d%d",&a,&b);
    if(a==b){
        printf("both entered numbers are equall");
    }
    else{
        printf("entered numbers are not equall");
    }
    return 0;

}