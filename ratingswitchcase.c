#include<stdio.h>
int main(){
    int Rating;
    printf("Give your rating from 1 to 5 : ");
    scanf("%d",&Rating);
    switch(Rating){
        case 1:
        printf("your rating is 1");
        break;
        case 2:
        printf("your rating is 2");
        break;
        case 3:
        printf("your rating is 3");
        break;
        case 4:
        printf("your rating is 4");
        break;
        case 5:
        printf("your rating is 5");
        break;
        default:
        printf("your rating is invalid");
    }
    return 0;
}  