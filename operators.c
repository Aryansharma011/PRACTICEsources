#include<stdio.h>
int main(){
    int a,b,result;
    char o;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("enter the value of b = ");
    scanf("%d",&b);
    printf("enter the operator = ");
    scanf(" %c",&o);
    switch(o){
        case '+' :
                  result = a + b;
                  printf("The result is = %d\n",result);
                  break;
        case '-' :
                  result = a - b;
                  printf("The result is = %d\n",result);
                  break;
        case '*' :
                  result = a * b;
                  printf("The result is = %d\n",result);
                  break;
        case '/' :
                  result = a / b;
                  printf("The result is = %d\n",result);
                  break;    
        case '%' :
                  result = a % b;
                  printf("The result is = %d\n",result);
                  break;                                                            
        default :
                  printf("Syntax Error\n");          
    }
    printf("Your operator is : %c\n",o);
    printf("Your both operands are : %d and %d",a,b);
    return 0;
}