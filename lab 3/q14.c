#include<stdio.h>
int main (){
    int num,i,count=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if (num%i==0){
            count++;
        }
    }
    if (count==2){
        printf("it is prime.");
    }
    else{
        printf("it is not prime number.");
    }
    return 0;
}