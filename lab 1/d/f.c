#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    num%2==0?printf("given number is even."):printf("given number is odd.");
    return 0;
}