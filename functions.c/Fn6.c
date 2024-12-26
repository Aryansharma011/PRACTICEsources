#include<stdio.h>
 int namaste(){
    printf("namaste");
    return 0;
 }
 int bonjour(){
    printf("bonjour");
    return 0;
 }
 int main(){
    printf("Enter f for french and i for india : ");
    char a;
    scanf("%c", &a);
    if(a == 'i'){
        namaste();
    }
        else{
            bonjour();
    }
    return 0;
 }
 