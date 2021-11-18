#include<stdio.h>
int main (){
    int pow,i,base,num=1;
    printf("enter base:");
    scanf("%d",&base);
    printf("enter power:");
    scanf("%d",&pow);
    for(i=1;i<=pow;i++){
        num*=base;
    }
    printf("result of %d power %d is %d:",base,pow,num);
    return 0;
}