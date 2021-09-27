#include<stdio.h>
int main(){
    int odd=1,count=0,num;
    printf("How many odd numbers do you want?:");
    scanf("%d",&num);
    do{
        printf("%d\t",odd);
        odd+=2;
        count++;
    }while(count!=num);
    return 0;
}