#include<stdio.h>
int main(){
    int n,r,x,sum=0;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(x==n;x!=0;x/10){
        r=n%10;
        sum = sum*10+r;
    }
    if(x==sum){
        printf("Entered no is palindrome");
    }
    else{
        printf("Entered no is not palindrome");
    }
    return 0;
}