#include<stdio.h>
int main(){
    int n,x,r,sum=0,fact=1;
    printf("Enter the number = ");
    scanf("%d",&n);
    for(x=n;x>=0;x=x/10){
        r=x%10;
        for(int i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;
    }
    if(n==sum){
        printf("is krishnamurthy number");
    }
    else{
        printf("not krishnamurthy number");
    }
    return 0;
}