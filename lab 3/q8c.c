#include<stdio.h>
int main (){
    int sum=0,num2,count=0;
    printf("enter number:");
    scanf("%d",&num2);
    do{
        count++;
        sum+=(count*count);
    }while(count!=num2);
    printf("%d\t",sum);

    return 0;
}

