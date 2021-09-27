#include<stdio.h>
int main(){
    float cel,fah;
    printf("enter temperature in centigrade:");
    scanf("%f",&cel);
    fah=(9*cel/5)+32;
    printf("In fahrenheit=%.2f",fah);
    return 0;
}