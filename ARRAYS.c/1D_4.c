#include<stdio.h>
int main(){
    int marks[] = {60,59,60,70};
    for(int i = 0;i < 4;i++ ){
        printf("The value of %d elements of the array is %d\n",i,marks[i]);
    }
    return 0;
}