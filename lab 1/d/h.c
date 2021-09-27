#include<stdio.h>
int main(){
    int num1,num2,num3,num4;
    printf("enter four number:");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
    (num1>num2&&num1>num3&&num1>num4)?
    printf("%d is largest.",num1):
    num2>num3&&num2>num4?
    printf("%d is the largest.",num2):
    num3>num4?
    printf("%d is the largest.",num3):
    printf("%d is the largest.",num4);
    return 0;
}