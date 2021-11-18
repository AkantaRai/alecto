#include<stdio.h>
int main (){
    int num,i=1,count=0;
    float series,sum=0;
    printf("enter limit to serie:");
    scanf("%d",&num);
    while(count!=num){
        series=1/((float)i*i);
        i+=2;
        sum+=series;
        count++;
    }
    printf("sum=%.2f",sum);
    return 0;
}