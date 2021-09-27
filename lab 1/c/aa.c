#include<stdio.h>
#define PI 3.14
int main(){
    int radius=5;
    printf("area=%.2f\n",PI*radius*radius);
    printf("circumference=%.2f",2*PI*radius);
    return 0;
}