#include<stdio.h>
int main(){
    int sum=0,num,digits=123;
    num=digits%10;
    digits/=10;
    sum+=num;
    num=digits%10;
    digits/=10;
    sum+=num;
    num=digits%10;
    digits/=10;
    sum+=num;
    printf("sum of the digits is %d",sum);
    return 0;
}