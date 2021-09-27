#include<stdio.h>
int main (){
    int num,sum=0,num2;
    printf("enter number:");
    scanf("%d",&num2);
    for(num=1;num<=num2;num++){
        sum=sum+num*num;
    }
    printf("%d\t",sum);

    return 0;
}

