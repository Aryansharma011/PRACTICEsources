#include<stdio.h>
int main(){
    int a,age;
    for(a=1;a<10;a++){
        printf("%d) Enter your age = ",a);
        scanf("%d",&age);
        if(age>18){
            printf("You are able to drink and drive\n");
            continue;
            printf("You cant do crime at any age");
        }
        else if(age<18){
            printf("You are not able to drink\n");
            printf("You are not able to drive\n");
            break;
        }
    }
    return 0;
}