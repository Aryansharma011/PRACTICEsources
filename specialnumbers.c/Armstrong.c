#include<stdio.h>
int main(){
    int n,r,x,sum=0;
    printf("enter the value of n = ");
    scanf("%d",&n);
    for(x==n;n!=0;n/10){
        r=n%10;
        sum=sum+r*r*r;
    }
        if(sum==x){
            printf("Entered no is armstrong no");
        }
        else{
            printf("Not armstrong no");
        }
    return 0;
}
// abhi karna h ise