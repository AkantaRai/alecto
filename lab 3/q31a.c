#include<stdio.h>
int main (){
    int num,i,sum=0,series;
    printf("enter limt to series:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        series=i*10+i;
        sum+=series;
    }
    printf("sum=%d",sum);
    return 0;
}