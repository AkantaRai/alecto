#include<stdio.h>
int main(){
    int i=0,sum=0,x=1;
    while (i<10){
        sum=sum+x;
        x+=2;
        i++;
    }
    printf("sum is %d",sum);
}