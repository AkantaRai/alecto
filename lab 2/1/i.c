#include<stdio.h>
int main(){
    int num;
    printf("enter as number:");
    scanf("%d",&num);
    if (num>0){
        printf("nubmer is positive.");
    }
    else if(num<0){
        printf("number is negative.");
    }
    return 0;
}