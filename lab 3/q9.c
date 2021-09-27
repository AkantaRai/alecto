#include<stdio.h>
int main (){
    int num,sum=0;
    for(num=1;num<=10;num++){
        sum=sum+num*num*num;
    }
    printf("%d\t",sum);

    return 0;
}

