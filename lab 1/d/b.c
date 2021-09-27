#include<stdio.h>
int main(){
    int days,year,months;
    printf("enter a days");
    scanf("%d",&days);
    months=days/30;
    year=days/365;
    printf("year=%d\nmonths=%d",year,months);
    return 0;
}