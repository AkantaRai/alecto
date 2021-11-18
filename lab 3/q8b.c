#include<stdio.h>
int main (){
    int sum=0,num2,count=1;
    printf("enter number:");
    scanf("%d",&num2);
    num2++;
    while(count!=num2){
        sum+=(count*count);
        count++;
    }
    printf("%d\t",sum);

    return 0;
}

