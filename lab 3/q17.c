#include<stdio.h>
int main (){
    int fab1=0,fab2=1,num,count=2;
    printf("enter a number of fibonacci:");
    scanf("%d",&num);
    printf("%d\t%d\t",fab1,fab2);
    while(count<num){
        fab1=fab1+fab2;
        printf("%d\t",fab1);
        fab2=fab1+fab2;
        printf("%d\t",fab2);
        count+=2;
    }
    return 0;
}