#include<stdio.h>
int main(){
    int number,rem,sum=0;
    printf("enter number:");
    scanf("%d",&number);
    do{
        rem=number%10;
        number/=10;
        sum+=rem;
    }while(number!=0);
    printf("sum: %d.",sum);
    return 0;
}