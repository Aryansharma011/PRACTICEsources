#include<stdio.h>
int main(){
    int a,age;
    for(a=1;a<10;a++){
        printf("%d) Enter your age = ",a);
        scanf("%d",&age);
        if(age>18){
            printf("You are able to drive and drink");
            break;
        }
            else if(age<18){
                printf("You are not able to drive and drink\n");
            }
    }
    return 0;
}