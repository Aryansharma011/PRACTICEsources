// 4. With argument and without return value
#include<stdio.h>
void printstar(int n){
    for(int i = 0;i<n;i++){
        printf("%c",'*');
    }
}
int main(){
    printstar(5);
    printstar(4);
    printstar(3);
    printstar(2);
    printstar(1);
    return 0;
}