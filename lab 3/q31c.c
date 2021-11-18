#include<stdio.h>
#include<math.h>
int main(){
    int num,i,sum=0,series;
    printf("enter limit to series:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        series=pow(i,i);
        sum+=series;
    }
    printf("sum=%d",sum);
    return 0;
}