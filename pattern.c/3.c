#include<stdio.h>
int main(){
    int rows;
    printf("rows you want : ");
    scanf("%d",&rows);
    for(int i=1;i<rows;i++)
    {
        printf("*\n");
    }
   for(int j=0;j<rows;j++){
    printf(" *");
   }
    return 0;
}