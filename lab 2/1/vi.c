#include<stdio.h>
int main(){
    int year;
    printf("enter a year:");
    scanf("%d",&year);
    if (year%4==0){
        printf("this year is leap year.");
    }
    else if(year%100==0){
        printf("this year is leap year.");
    }
    else if (year%400==0){
        printf("this year is leap year.");
    }
    else{
        printf("this year is not leap year.");
    }
    return 0;
}