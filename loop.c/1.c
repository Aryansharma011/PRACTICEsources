#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(b = 0;b<a;++b){
        printf("%d) RN is great\n",b);
    }
    return 0;
}