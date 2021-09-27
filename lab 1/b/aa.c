#include<stdio.h>
int main(){
    float fahrenheit,centi;
    printf("enter temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    centi=(fahrenheit-32)*5/9;
    printf("In centigrade=%.2f",centi);
    return 0;
}