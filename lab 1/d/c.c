#include<stdio.h>
int main(){
    int number,rem,reverse=0;
    printf("enter number:");
    scanf("%d",&number);
    do{
        rem=number%10;
        number/=10;
        reverse=(reverse*10)+rem;
    }while(number!=0);
    printf("reverse number is %d.",reverse);
    return 0;
}