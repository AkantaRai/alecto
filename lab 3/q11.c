#include<stdio.h>
int main (){
    int num,fact=1,num2;
    printf("enter number:");
    scanf("%d",&num2);
    for(num=1;num<=num2;num++){
        fact*=num;
    }
    printf("factorial:%d",fact);

    return 0;
}