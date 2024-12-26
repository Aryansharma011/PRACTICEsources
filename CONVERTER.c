#include<stdio.h>
int main(){
    float a,b,c,d,e,f,g,h;
    char input;
    while(1){
    printf("Select your preference \n1)Kms to miles\n2)Inches to foot\n3)CM to Inches\n4)pounds to kgs\n5)Inches to meters\n");
    printf("Enter q to exit\n");
    printf("Enter your preference = ");
    scanf(" %c",&input);
    printf("Your preference to convetrs measurement is option %c\n",input);
    switch(input){
        case 'q' :
        printf("Quitting the program...");
        break;


        case '1' :
        printf("Enter the value of km to convert in miles = ");
        scanf("%f",&a);
        b = a * 0.621371;
        printf("%.2f km is equal to %.2f miles\n",a,b);
        break ;


        case '2' :
        printf("Enter the value of Inches to convert in foot = ");
        scanf("%f",&c);
        d = c * 0.0833;
        printf("%.2f Inches is equal to %.2f foot\n",c,d);
        break ;


        case '3' :
        printf("Enter the value of cm to convert in inhes = ");
        scanf("%f",&e);
        c = e * 0.3937;
        printf("%.2f cm is equal to %.2f inches\n",e,c);
        break ;


        case '4' :
        printf("Enter the value of pounds to convert in kgs = ");
        scanf("%f",&f);
        g = f * 0.454;
        printf("%.2f pounds is equal to %.2f kgs\n",f,g);
        break;


        case '5' :
        printf("Enter the value of Inches to convert in meter = ");
        scanf("%f",&c);
        h = c * 0.0254;
        printf("%.2f inches is equal to %.2f meters\n",c,h);
        break;


        default : 
        printf("wrong formate\n");

        
    }
    }
    return 0;
}