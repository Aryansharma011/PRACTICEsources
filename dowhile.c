#include<stdio.h>
int main(){
    int a,b = 0;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("S.no");
    do{
        b=b+1;
        printf("\n%d) Rn is great",b);
    }while(b<a);
    return 0;
}